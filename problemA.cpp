// Map of Sweden

#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int findLand(vector<vector<node*>> map, int start_x, int start_y, node* origin) {
    int land = 0;

    queue<vector<int>> q;
    q.push({start_x, start_y});

    bool valid = false;

    while(!q.empty()) {
        int c_x = q.front()[0], c_y = q.front()[1];
        q.pop();
        if((map[c_x][c_y])->getParent() == map[start_x][start_y]->getParent())
            continue;
        if(map[c_x][c_y]->getParent() == origin) {
            valid = true;
            continue;
        }
        map[c_x][c_y]->getParent()->setParent(map[start_x][start_y]->getParent());
        map[c_x][c_y]->getParent()->children += map[c_x][c_y]->children + 1;
        land++;

        // check up
        if(c_x-1 >= 0) {
            q.push({c_x-1,c_y});
        }
        // check down
        if(c_x+1 < map.size()) {
            q.push({c_x+1,c_y});
        }
        // check left
        if(c_y-1 >= 0) {
            q.push({c_x,c_y-1});
        }
        // check right
        if(c_y+1 < map[c_x].size()) {
            q.push({c_x,c_y+1});
        }
        
    }

    return (valid) ? land : -1;
}

struct node {
    int children = 0;
    char val;
    node* parent;

    node(int v) {
        val = v;
    }

    void setParent(node* p) {
        parent = p;
    }

    node* getParent() {
        if(parent != this)
            return parent->getParent();
        return parent;
    }
};

int main() {
    int r, c, u;
    cin >> r;
    cin >> c;
    cin >> u;

    vector<vector<node*>> map(r);

    string input;
    int x, y, s_x, s_y;

    node* origin;

    for(int i = 0; i < r; i++) {
        cin >> input;
        for(int j = 0; j < c; j++) {
            node n = node(input[j]);
            n.setParent(&n);
            if(input[j] == 'S') {
                s_x = i;
                s_y = j;
                origin = &n;
            }
            map[i].push_back(&n);
        }
    }

    vector<int> x_changes;
    vector<int> y_changes;

    for(int i = 0; i < u; i++) {
        cin >> x;
        x_changes.push_back(x);
        cin >> y;
        y_changes.push_back(y);
    }

    cout << findLand(map, s_x, s_y, origin) << endl;

    for(int i = 0; i < u; i++) {
        map[x_changes[i]-1][y_changes[i]-1]->val = '#';
        cout << findLand(map, x_changes[i]-1, y_changes[i]-1, origin) << endl;
    }
}
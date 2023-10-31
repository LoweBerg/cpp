// Map of Sweden

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

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

int findLand(vector<vector<node*>> map, int start_x, int start_y, node* origin) {

    queue<vector<int>> q;

    // check up
    if(start_x-1 >= 0 && map[start_x-1][start_y]->val == '#') {
        q.push({start_x-1,start_y});
    }
    // check down
    if(start_x+1 < map.size() && map[start_x+1][start_y]->val == '#') {
        q.push({start_x+1,start_y});
    }
    // check left
    if(start_y-1 >= 0 && map[start_x][start_y-1]->val == '#') {
        q.push({start_x,start_y-1});
    }
    // check right
    if(start_y+1 < map[start_x].size() && map[start_x][start_y+1]->val == '#') {
        q.push({start_x,start_y+1});
    }

    bool valid = false;

    while(!q.empty()) {
        int c_x = q.front()[0], c_y = q.front()[1];
        q.pop();
        if(map[c_x][c_y]->val == '.')
            continue;
        if(map[c_x][c_y]->getParent() == map[start_x][start_y]->getParent())
            continue;
        if(map[c_x][c_y]->getParent() == origin) {
            valid = true;
            continue;
        } else {
            map[c_x][c_y]->getParent()->setParent(map[start_x][start_y]->getParent());
            map[c_x][c_y]->getParent()->children += map[c_x][c_y]->children + 1;
        }

        // check up
        if(c_x-1 >= 0 && map[c_x-1][c_y]->val == '#') {
            q.push({c_x-1,c_y});
        }
        // check down
        if(c_x+1 < map.size() && map[c_x+1][c_y]->val == '#') {
            q.push({c_x+1,c_y});
        }
        // check left
        if(c_y-1 >= 0 && map[c_x][c_y-1]->val == '#') {
            q.push({c_x,c_y-1});
        }
        // check right
        if(c_y+1 < map[c_x].size() && map[c_x][c_y+1]->val == '#') {
            q.push({c_x,c_y+1});
        }
        
    }

    if(valid) {
        map[start_x][start_y]->setParent(origin);
        origin->children += map[start_x][start_y]->children + 1;
    }

    return origin->children+1;
}


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
            node* n = new node(input[j]);
            n->setParent(n);
            if(input[j] == 'S') {
                s_x = i;
                s_y = j;
                origin = n;
            }
            map[i].push_back(n);
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
// Map of Sweden

/*
    union find solution is stable but too slow, probably because it has to allocate a bunch of memory to objects
    the key to solving the problem is to only compute land mass when it connects to the mainland, which should be
    the only visited nodes at any time.
*/

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

    // bfs to find all land
    queue<vector<int>> q;

    q.push({start_x,start_y});

    while(!q.empty()) {
        int c_x = q.front()[0], c_y = q.front()[1];
        q.pop();

        // every node is mapped to the origin on visit, so all visited nodes have the origin as a parent
        // exception needs to be made when the origin itself is the parent, maybe defaulting to null could solve this issue
        if(map[c_x][c_y] != origin && map[c_x][c_y]->getParent() == origin) {
            continue;
        }
        map[c_x][c_y]->getParent()->setParent(origin);
        if(map[c_x][c_y] != origin) { // the origin node takes all the children of the visited node plus the node itself
            origin->children += map[c_x][c_y]->children + 1;
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

    return origin->children + 1; 
}

bool isValid(vector<vector<node*>> map, int x, int y, node* origin) {
    // checks if new node is connected to main graph

    // check up
    if(x-1 >= 0 && map[x-1][y]->getParent() == origin) {
        return true;
    }
    // check down
    if(x+1 < map.size() && map[x+1][y]->getParent() == origin) {
        return true;
    }
    // check left
    if(y-1 >= 0 && map[x][y-1]->getParent() == origin) {
        return true;
    }
    // check right
    if(y+1 < map[x].size() && map[x][y+1]->getParent() == origin) {
        return true;
    }

    return false;
}


int main() {
    int r, c, u;
    cin >> r;
    cin >> c;
    cin >> u;

    vector<vector<node*>> map(r, vector<node*>(c));

    string input;
    int x, y, s_x, s_y;

    node* origin;

    for(int i = 0; i < r; i++) {
        cin >> input;
        for(int j = 0; j < c; j++) {
            node* n = new node(input[j]);
            n->setParent(n);
            if(input[j] == 'S') { // save the position of Stockholm as the origin
                s_x = i;
                s_y = j;
                origin = n;
            }
            map[i][j] = n;
        }
    }

    vector<int> x_changes(u);
    vector<int> y_changes(u);

    for(int i = 0; i < u; i++) {
        cin >> x_changes[i];
        cin >> y_changes[i];
    }

    // driver code

    int land = findLand(map, s_x, s_y, origin);

    cout << land << endl;

    for(int i = 0; i < u; i++) {
        map[x_changes[i]-1][y_changes[i]-1]->val = '#';
        s_x = x_changes[i]-1;
        s_y = y_changes[i]-1;
        if(isValid(map, s_x, s_y, origin)) { // only calculate land if the new land connects to the origin
            land = findLand(map, s_x, s_y, origin);
        }
        
        cout << land << endl;
    }
}
// Map of Sweden

/*
    this program works by marking all land connected to Stockholm as V and incrementing a global counter each time
    a new node is marked, it then looks at each new land node added and checks if it connects to the previously
    visited nodes, in which case it connects to Stockholm. If it does connect, the program searches from that node
    onward using the same process and the map which resulted from the previous search
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findLand(vector<vector<char>>* map, int start_x, int start_y, int land) {

    queue<vector<int>> q;
    q.push({start_x, start_y});


    while(!q.empty()) {
        int c_x = q.front()[0], c_y = q.front()[1];
        q.pop();
        if((*map)[c_x][c_y] == 'V') // visited nodes are marked as V which saves space as opposed to using another array
            continue;
        (*map)[c_x][c_y] = 'V';
        land++;

        // check up
        if(c_x-1 >= 0 && (*map)[c_x-1][c_y] == '#') {
            q.push({c_x-1,c_y});
        }
        // check down
        if(c_x+1 < (*map).size() && (*map)[c_x+1][c_y] == '#') {
            q.push({c_x+1,c_y});
        }
        // check left
        if(c_y-1 >= 0 && (*map)[c_x][c_y-1] == '#') {
            q.push({c_x,c_y-1});
        }
        // check right
        if(c_y+1 < (*map)[c_x].size() && (*map)[c_x][c_y+1] == '#') {
            q.push({c_x,c_y+1});
        }
    }

    return land;
}

bool isValid(vector<vector<char>>* map, int x, int y) {
    // checks if new node is connected to main graph

    // check up
    if(x-1 >= 0 && (*map)[x-1][y] == 'V') {
        return true;
    }
    // check down
    if(x+1 < (*map).size() && (*map)[x+1][y] == 'V') {
        return true;
    }
    // check left
    if(y-1 >= 0 && (*map)[x][y-1] == 'V') {
        return true;
    }
    // check right
    if(y+1 < (*map)[x].size() && (*map)[x][y+1] == 'V') {
        return true;
    }

    return false;
}

int main() {
    int r, c, u;
    cin >> r;
    cin >> c;
    cin >> u;

    vector<vector<char>> map;

    string input;
    int x, y, s_x, s_y;

    for(int i = 0; i < r; i++) {
        cin >> input;
        for(int j = 0; j < c; j++) {
            if(input[j] == 'S') {
                s_x = i;
                s_y = j;
            }
        }
        map.push_back(vector<char>(input.begin(), input.end())); // this can be optimized by pre-allocating space to map
    }

    vector<int> x_changes;
    vector<int> y_changes;

    for(int i = 0; i < u; i++) {
        cin >> x;
        x_changes.push_back(x); // more potential optimization by allocating, though it isn't a problem at the current input size
        cin >> y;
        y_changes.push_back(y);
    }

    int land = findLand(&map, s_x, s_y, 0); // map is passed by reference as all changes need to be saved for later searches

    cout << land << endl;

    for(int i = 0; i < u; i++) {
        map[x_changes[i]-1][y_changes[i]-1] = '#'; // need to subtract 1 as input is 1-indexed
        if(isValid(&map, x_changes[i]-1, y_changes[i]-1)) { // only search if new land connects to Stockholm
            land = findLand(&map, x_changes[i]-1, y_changes[i]-1, land); 
        }
        cout << land << endl;
    }
}
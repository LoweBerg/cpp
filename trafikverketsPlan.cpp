#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define uint unsigned int

using namespace std;

const uint big = 10E5;

struct less_depth{
    bool operator()(uint n1, uint n2, vector<uint>* depth) {
        return depth->at(n1) > depth->at(n2);
    }
};

void topSort(vector<vector<uint>>* adj, deque<uint>* topOrder, vector<bool>* visited, uint current) {
    for(uint e : adj->at(current)) {
        if(!visited->at(e)) {
            visited->at(e) = true;
            topSort(adj, topOrder, visited, e);
        }
    }
    topOrder->push_back(current);
}

void make_path(vector<vector<uint>>* adj, vector<bool>* visited, vector<pair<uint, uint>>* path_ids, uint current, uint* current_id, uint current_depth) {
    visited->at(current) = true;
    path_ids->at(current) = {*current_id, current_depth};
    for(uint e : adj->at(current)) {
        if(!visited->at(e)) {
            make_path(adj, visited, path_ids, e, current_id, current_depth+1);
            break;
        }   
    }
}


bool find(vector<vector<uint>>* adj_out, vector<vector<uint>>* adj_in, vector<uint>* depth, uint n1, uint n2) {
    // n1 is the home and n2 is the workplace
    
    while(n1 != n2) {
        if(depth->at(n1) >= depth->at(n2)) {
            // home needs to travel to outgoing edges with lower depth to go up, if not possible then return false
            for(auto e : adj_out->at(n1)) {
                if(depth->at(e) < depth->at(n1)) {
                    n1 = e;
                    goto cont;
                }
            }
            goto false_return;
        }
        if(depth->at(n2) > depth->at(n1)) {
            // workplace needs to travel to incoming edges with lower depth, if not possible then return false
            for(auto e : adj_in->at(n2)) {
                if(depth->at(e) < depth->at(n2)) {
                    n2 = e;
                    goto cont;
                }
            }
            goto false_return;
        }
        cont:;
    }


    return true;
    false_return:
        return false;
}

int main() {
    uint n;
    cin >> n;

    vector<bool> batman(n);

    vector<vector<uint>> adj(n+1);
    uint a, b;
    for(int i = 0; i < n-1; i++) {
        cin >> a >> b;
        
        batman[b-1] = true;
        adj[a-1].push_back(b-1);
    }

    for(bool b : batman) {
        if(!b) {
            adj.back().push_back(b);
        }
    }
    
    deque<uint> topOrder;
    vector<bool> visited(n);
    for(uint e : adj.back()) {
        topSort(&adj, &topOrder, &visited, e); // O(n)
    }

    vector<pair<uint, uint>> path_ids(n);
    visited = vector<bool>(n);
    uint id = 0;

    for(uint e : topOrder) {
        if(!visited[e]) {
            make_path(&adj, &visited, &path_ids, e, &id, 0);
            id++;
        }
    }

    

    
    uint q;
    cin >> q;

    uint h, w;
    uint res[q];
    uint work[q];

    for(uint i = 0; i < q; i++) {
        cin >> h >> w;
        res[i] = h-1;
        work[i] = w-1;
    }

    for(uint i = 0; i < q; i++) {
        if(find(&adj_out, &adj_in, &depth, res[i], work[i]))
            cout << "ja" << "\n";
        else 
            cout << "nej" << "\n";
    }
}
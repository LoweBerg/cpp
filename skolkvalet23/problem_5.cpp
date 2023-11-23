#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <unordered_set>

using namespace std;

struct greater_pickle {
    bool operator()(tuple<int, int, vector<int>> a, tuple<int, int, vector<int>> b) {
        return get<1>(a) < get<1>(b);
    }    
};

int calc_build(vector<int> current, vector<int[2]>* buildings) {
    int sum = 0;
    for(int i = 0; i < current.size(); i++) {
        sum += buildings->at(i)[0] * current[i];
    }
    return sum;
}

int main() {
    int n, t;
    cout << "Antal byggnader ? ";
    cin >> n;
    cout << "Kostnad av Megapickeln ? ";
    cin >> t;

    vector<int[2]> v(n);

    for(int i = 1; i <= n; i++) {
        cout << "Produktionshastighet och pris för byggnad " << i << " ? ";
        cin >> v[i-1][0] >> v[i-1][1];
    }

    vector<int> visited(n);
    visited[0] = 1;

    vector<int> b(n);
    b[0] = 1;
    queue<tuple<int, int, vector<int>>> q;
    // time, pickles, buildings
    q.push({1, 0, b});
    int ans = 0;

    int x, y;
    while(!q.empty()) {
        x = get<0>(q.front());
        y = get<1>(q.front());
        b = get<2>(q.front());

        y += calc_build(b, &v);

        q.pop();

        if(y >= t) {
            ans = x;
            break;
        } else {
            q.push({x+1, y, b});
        }

        vector<int> copy;
        for(int i = 0; i < v.size(); i++) {
            if(y >= v[i][1]) {
                copy = b;
                copy[i]++;
                if(visited[i] >= copy[i])
                    continue;
                visited[i] = copy[i];
                q.push({x+1, y - v[i][1], copy});
            }
        }
    }

    cout << "Svar: " << ans;
}
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findMaxIndex(vector<int> e) {
    vector<int> j;

    return j[0];
}

int main() {
    int k, n;
    cin >> k;
    cin >> n;

    vector<vector<int>> items(k, vector<int>(n));
    vector<int> maximum(n);

    int e;
    for(vector<int> &v : items) {
        for(int i = 0; i < v.size(); i++) {
            cin >> e;
            maximum[i] = max(maximum[i], e);
            v[i] = e;
        }
    }

    vector<vector<int>> compressed(k, vector<int>(n));

    for(int i = 0; i < compressed.size(); i++) {
        for(int j = 0; j < compressed[0].size(); j++) {
            compressed[i][j] = items[i][j] - maximum[j];
        }
    }

    vector<int> result(k);

    for(int i = 0; i < result.size(); i++) {
        result[i] = findMaxIndex(compressed[i]);
    }

    int sum = 0;

    for(int e : result) {
        sum += e;
    }

    cout << sum;

}
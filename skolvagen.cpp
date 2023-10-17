#include <iostream>
#include <string>
#include <vector>

using namespace std;

void search(string path, bool north, vector<int>* dist, int cross, int point) {

    for (int i = point; i < path.length(); i++) {

        if (path[i] == 'B') {
            cross++;
        }
        
        else if (north && path[i] == 'N') {

            cross++;
            search(path, !north, dist, cross, i + 1);

        } 

        else if (!north && path[i] == 'S') {

            cross++;
            search(path, !north, dist, cross, i + 1);

        }

        if (north) {
            if ((*dist)[i] < cross) {
                return;
            }

            (*dist)[i] = cross;
        } else {
            if ((*dist)[i] < cross + 1) {
                return;
            }

            (*dist)[i] = cross + 1;
        }
    }
}

int main() {
    bool north = true;
    string path;

    cin >> path;

    // path = "SNBNNSB";

    vector<int> dist(path.length(), 10000);

    search(path, north, &dist, 0, 0);
    
    cout << dist.back() << endl;

}
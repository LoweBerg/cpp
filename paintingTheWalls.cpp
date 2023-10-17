#include <iostream>
#include <vector>

using namespace std;

int chooseSmallWall(vector<int>& cost, vector<int>& time, vector<int>& takenWalls);
void chooseBigWall(vector<int>& cost, vector<int>& time, vector<int>& takenWalls);

int main() {
    vector<int> cost = {1, 2, 3, 2};
    vector<int> time = {1, 2, 3, 2};
    vector<int> takenWalls = {};

    int p1Wall;
    int totalCost = 0;

    while(takenWalls.size() < cost.size()) {
        p1Wall = chooseSmallWall(cost, time, takenWalls);
        totalCost += cost[p1Wall];
        for(int i = 0; i < time[p1Wall]; i++) {
            chooseBigWall(cost, time, takenWalls);
        }
    }

    cout << totalCost;
}

int chooseSmallWall(vector<int>& cost, vector<int> &time, vector<int>& takenWalls) {
    int index = 0;
    double smallest = INT16_MAX;
    /* 
    need to find some times that, when added together, equals the
    number of elements left in the time array

    */

    for(int i = 0; i < cost.size(); i++) {
        if(cost[i] / time[i] < smallest) {
            for(int e : takenWalls) {
                if(e == i)
                    goto continue2;
            }
            index = i;
            smallest = cost[i] / time[i];
        }
        continue2:;
    }

    takenWalls.push_back(index);

    return index;
}

void chooseBigWall(vector<int>& cost, vector<int>& time, vector<int>& takenWalls) {
    int index = 0;
    int biggest = 0;

    for(int i = 0; i < cost.size(); i++) {
        if(cost[i] > biggest) {
            for(int e : takenWalls) {
                if(e == i)
                    goto continue3;
            }
            index = i;
            biggest = cost[i];
        }
        continue3:;
    }

    takenWalls.push_back(index);
}
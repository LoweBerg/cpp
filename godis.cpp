#include <iostream>
#include <vector>

using namespace std;

struct bag {
    long long v[21];
};

bag merge(bag n1, bag n2) {
    bag res = {0};
    for(long long i = 0; i <= 20; i++) {
        res.v[i] = n1.v[i] + n2.v[i];
    }

    return res;
}

bag unMerge(bag n1, bag n2) {
    bag res = {0};
    for(long long i = 0; i <= 20; i++) {
        res.v[i] = n1.v[i] - n2.v[i];
    }

    return res;
}

long long sum(bag n) {
    long long count = 0;
    for(long long i = 1; i <= 10; i++) {
        count += abs(n.v[10+i] - n.v[10-i]);
    }
    return count;
}

int main() {
    int x;
    cin >> x;

    vector<bag> c(x, {0}); 
    bag start = {0};

    long long k, s, n;

    for(int i = 0; i < x; i++) {
        cin >> k;
        for(int j = 0; j < k; j++) {
            cin >> s >> n;
            c[i].v[10+s] = n;
            start.v[10+s] += n;
        }
    }

    bool removed[x] = {false};
    long long bestSum = sum(start);
    bag bestBag = start;

    cont:
    int bestI = -1;

    for(int i = 0; i < x; i++) {
        if(removed[i]) {
            continue;
        }

        bag currentBag = unMerge(start, c[i]);
        long long currentSum = sum(currentBag);

        if(currentSum > bestSum) {
            bestBag = currentBag;
            bestSum = currentSum;
            bestI = i;
        }
    }

    if(bestI != -1) {
        removed[bestI] = true;
        start = bestBag;
        goto cont;
    }

    cout << sum(start) << endl;
}
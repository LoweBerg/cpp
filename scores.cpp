#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {

    cout << "How many scores?: ";
    int n;
    cin >> n;

    vector<int> scores;
    int score;

    for (int i = 0; i < n; i++) {
        cout << "score: ";
        cin >> score;
        scores.push_back(score);
    }

    

    float sum = 0.0, avg;

    for (int score : scores ) {
        sum += (float)score;
    }
    avg = sum /= scores.size();

    printf("Average score: %f", avg);
    return 0;
}
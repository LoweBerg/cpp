#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c, n;
    cin >> r >> c >> n;

    string com;
    cin >> com;

    vector<vector<char>> m(r, vector<char>(c));

    string input;
    int x;
    int y;

    for(int i = 0; i < r; i++) {
        cin >> input;
        for(int j = 0; j < c; j++) {
            if(input[j] == 'O') {
                x = j;
                y = i;
            }
            m[i][j] = input[j];
        }
    }


    long long count = 0;

    for(char c : com) {

        if(c == '<') {
            while(m[y][x-1] != '#') {
                if(m[y][x] != 'V') {
                    m[y][x] = 'V';
                    count++;
                }
                x--;
            }
        } else if(c == '>') {
            while(m[y][x+1] != '#') {
                if(m[y][x] != 'V') {
                    m[y][x] = 'V';
                    count++;
                }
                x++;
            }
        } else if(c == '^') {
            while(m[y-1][x] != '#') {
                if(m[y][x] != 'V') {
                    m[y][x] = 'V';
                    count++;
                }
                y--;
            }
        } else if(c == 'v') {
            while(m[y+1][x] != '#') {
                if(m[y][x] != 'V') {
                    m[y][x] = 'V';
                    count++;
                }
                y++;
            }
        }
    }

    if(m[y][x] != 'V') {
        count++;
    }

    cout << count;
}
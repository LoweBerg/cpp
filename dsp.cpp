#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

void insert(int* memory, int x, int y) {
    memory[y] = x;
} 

void add(int* memory, int x, int y) {
    memory[y] += memory[x];
}

void sub(int* memory, int x, int y) {
    memory[y] -= memory[x];
}

int jnz(int* memory, int x, int y) {
    if (memory[x] != 0) {
        return y;
    }
    return -1;
}

void input(int* memory, int x) {
    cin >> memory[x];
}

void output(int* memory, int x) {
    cout << memory[x] << endl;
}

int main() {

    int memory[256] = {0};

    vector<tuple<string, int, int>> instructions;

    int inst_size;
    cin >> inst_size;

    instructions.reserve(inst_size);

    string instruction;
    int x;
    int y;

    for (int i = 0; i < inst_size; i++) {
        cin >> instruction;

        if (instruction == "HALT") {
            instructions.push_back( tuple<string, int, int>(instruction, NULL, NULL) );
        } else if ( instruction == "INPUT" || instruction == "OUTPUT") {
            cin >> x;

            instructions.push_back( tuple<string, int, int>(instruction, x, NULL) );
        } else {
            cin >> x;
            cin >> y;

            instructions.push_back( tuple<string, int, int>(instruction, x, y) );
        }
    }

    long com_num = 0;
    tuple<string, int, int> com;

    while (com_num <= 1000005) {
        com = instructions[com_num];

        if (get<0>(com) == "HALT") {
            break;
        }

        x = get<1>(com);

        if (get<0>(com) == "INPUT") {
            input(memory, x);
            com_num += 1;
            continue;
        }
        
        if (get<0>(com) == "OUTPUT") {
            output(memory, x);
            com_num += 1;
            continue;
        }

        y = get<2>(com);

        if (get<0>(com) == "CONST") {
            insert(memory, x, y);
        }

        if (get<0>(com) == "ADD") {
            add(memory, x, y);
        }
        
        if (get<0>(com) == "SUB") {
            sub(memory, x, y);
        }

        if (get<0>(com) == "JNZ") {
            if (jnz(memory, x, y) >= 0) {
                com_num = jnz(memory, x, y);
                continue;
            }
        }

        com_num += 1;
    }
}
#include <iostream>

void change(int* array, int x, int y) {
    array[x] = y;
}

int main() {

    int array[5] = {0};

    change(array, 0, 3);
    change(array, 3, 6);
    change(array, 4, 2);
    change(array, 0, 2);

    for (int elem : array) {
        std::cout << elem << std::endl;
    }
}
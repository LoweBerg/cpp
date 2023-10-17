#include <stdlib.h>
#include <iostream>

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 10 + 1;
    }
    
    std::cout << arr;
    qsort(arr, 0, 10);
    std::cout << arr;
}

void qsort(int slice[], int lower, int upper) {

    if (sizeof(*slice)/sizeof(int) > 2) {
        int pivot = lower;
        
        for (int i = 1; i < upper; i++) {
            if (slice[i] < pivot) {
                std::swap(slice[pivot], slice[i]);
                pivot++;
                std::swap(slice[i], slice[pivot]);
            }
        }

        qsort(slice, 0, pivot);
        qsort(slice, pivot + 1, upper);
    }
    else if (lower != upper) {
        if (slice[lower] > slice[upper]) {
            std::swap(slice[lower], slice[upper]);
        }
    }
}
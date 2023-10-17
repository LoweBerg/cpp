#include <iostream>
#include <cmath>

int main() {
    double num;
    std::cin >> num;

    double hi = num;
    double lo = 0;
    double mid;
    
    for (int i; i < 100; i++) {
        mid = (hi + lo)/2;
        if (std::pow(mid, 2.0) == num) {
            break;
        } else if (std::pow(mid, 2.0) > num) {
            hi = mid;
        } else {
            lo = mid;
        }
    }

    std::cout << mid << std::endl;
}
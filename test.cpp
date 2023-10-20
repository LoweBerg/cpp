#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, int> t1 = std::tuple(1, 4);
    std::tuple<int, int> t2 = t1;
    t1 = std::tuple(5, 5);

    std::cout << std::get<0>(t1) << std::get<1>(t1) << std::endl;
    std::cout << std::get<0>(t2) << std::get<1>(t2) << std::endl;
}
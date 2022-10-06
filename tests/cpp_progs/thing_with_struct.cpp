#include <iostream>
using namespace std;

extern "C" {

    struct A {
        uint32_t first;
        uint32_t second;
    };

    A* m1() {

        A* a = new A({6,9});
        int sum = a->first + a->second;

        std::cout << "(c++ says) sum of a is " << sum << std::endl;

        return a;
    }
}

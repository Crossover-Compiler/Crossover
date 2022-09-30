#include <iostream>
extern "C" {

    using namespace std;


    void prog_says(std::string input) {
        std::cout << "this program says: ";

        std::cout << input;

        std::cout << std::endl;
    }
}


#include <iostream>
extern "C" {

    void prog_says(char* input) {
        std::cout << "this program says: ";

        std::cout << input;

        std::cout << std::endl;
    }
}


#include "first_app.hpp"

// std
#include <cstdlib>
#include <iostream>
#include <stdexcept>
using namespace std;


int main() {
    lve::FirstApp app{};

    try {
        app.run();
    } catch (const exception &e) {
        cerr << e.what() << '\n';
        return EXIT_FAILURE;

    }
   
    return EXIT_SUCCESS;

}
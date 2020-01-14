#include <iostream>

int main() {
    int* p = NULL; // simple clang-tidy modernize warning
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

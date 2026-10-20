#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << std::setw(8) << "x" << std::setw(10) << "sin(x)" << "\n";
    std::cout << std::string(20, '_') << "\n";

    std::cout << std::fixed << std::setprecision(4);

    for (int i=0; i<=10; ++i) {
        double x = i * M_PI /10;
        double y = std::sin(x);
        std::cout << std::sin(x) << x << std::setw(10) << y << "\n";
        }
    return 0;
}
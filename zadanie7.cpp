#include <iostream>

int main() {
    int n = 5;

    // Прямоугольник
    std::cout << "Прямоугольник:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) std::cout << "*";
        std::cout << "\n";
    }

    // Треугольник
    std::cout << "\nТреугольник:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) std::cout << "*";
        std::cout << "\n";
    }

    // Ёлочка
    std::cout << "\nЁлочка:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) std::cout << " ";
        for (int j = 0; j < 2 * i - 1; ++j) std::cout << "*";
        std::cout << "\n";
    }

    // Ромб
    std::cout << "\nРомб:\n";
    // Верхняя половина
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) std::cout << " ";
        for (int j = 0; j < 2 * i - 1; ++j) std::cout << "*";
        std::cout << "\n";
    }
    // Нижняя половина
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 0; j < n - i; ++j) std::cout << " ";
        for (int j = 0; j < 2 * i - 1; ++j) std::cout << "*";
        std::cout << "\n";
    }

    return 0;
}
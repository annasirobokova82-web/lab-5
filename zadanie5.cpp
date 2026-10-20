#include <iostream>

int main() {
    double a, b;
    char operation;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;
    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
        case '+': std::cout << "Результат: " << a + b << "\n"; break;
        case '-': std::cout << "Результат: " << a - b << "\n"; break;
        case '*': std::cout << "Результат: " << a * b << "\n"; break;
        case '/':
            if (b == 0) std::cout << "Ошибка: деление на ноль!\n";
            else std::cout << "Результат: " << a / b << "\n";
            break;
        default: std::cout << "Неизвестная операция\n";
    }
    return 0;
}
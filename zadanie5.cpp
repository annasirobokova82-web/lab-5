#include <iostream>

int main() {
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;

    int original = n;
    int count = 0;
    int total = 0;
    int product = 1;
    int reversedNum = 0;

    while (n > 0) {
        int digit = n % 10;
        ++count;
        total += digit;
        product *= digit;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }

    std::cout << "Количество цифр: " << count << "\n";
    std::cout << "Сумма цифр: " << total << "\n";
    std::cout << "Произведение цифр: " << product << "\n";
    std::cout << "Перевёрнутое число: " << reversedNum << "\n";

    return 0;
}
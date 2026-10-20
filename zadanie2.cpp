#include <iostream>

int main() {
    int n;
    std::cout << "Введите N: ";
    std::cin >> n;

    long long sumNumbers = 0;
    long long product = 1;
    long long sumSquares = 0;

    for (int i=1; i<=n; ++i) {
        sumNumbers  +=i;
        product *= i;
        sumSquares += i*i;
    }

    std::cout << "Сумма: " << sumNumbers << "\n";
    std::cout << "Произведение (N!): " << product << "\n";
    std::cout << "Сумма квадратов: " << sumSquares << "\n";
    return 0;    
}
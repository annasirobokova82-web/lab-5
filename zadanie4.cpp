#include <iostream>

int main() {
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;

    int original = n;
    std::cout << original << " = ";

    bool first = true; // Флаг для правильной расстановки знаков умножения

    // Проверяем делители до корня из числа для оптимизации
    for (int divisor = 2; divisor * divisor <= n; ++divisor) {
        // Пока число делится на текущий делитель, выводим его
        while (n % divisor == 0) {
            if (!first) std::cout << " * ";
            std::cout << divisor;
            first = false;
            n /= divisor;
        }
    }

    // Если после цикла осталось число больше 1, значит оно само является простым
    if (n > 1) {
        if (!first) std::cout << " * ";
        std::cout << n;
    }
    std::cout << "\n";
    return 0;
}
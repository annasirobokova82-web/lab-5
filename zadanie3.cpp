#include <iostream>

int main() {
    int n;
    std::cout << "Введите N: ";
    std::cin >> n;

    long long a = 0, b=1;

    std::cout << "Первые" << n << " чисел Фибоначчи:\n";
    for (int i=0; i< n; ++i) {
        std::cout << a << " ";
        long long temp = a+ b;
        a=b;
        b=temp;
    }
    std::cout << "\n";    
    return 0;
}
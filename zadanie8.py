n = int(input("Введите N: "))

# Создаем список, где True означает, что число простое
is_prime = [True] * (n + 1)

# 0 и 1 не являются простыми числами
if n >= 0: is_prime[0] = False
if n >= 1: is_prime[1] = False

# Цикл с параметром (for) для перебора делителей
for p in range(2, int(n**0.5) + 1):
    # Если число p простое, вычеркиваем все его кратные
    if is_prime[p]:
        # Вложенный цикл для вычеркивания
        for i in range(p * p, n + 1, p):
            is_prime[i] = False

# Выводим результат
print(f"Простые числа до {n}:")
for p in range(2, n + 1):
    if is_prime[p]:
        print(p, end=" ")
print() # Перевод строки
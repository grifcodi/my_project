/* ### Задача 3: Заповнення прямокутника послідовними числами від 0 до `m * n - 1`

**Умова**: Користувач вводить два цілі числа `m` і `n`, де `m` — кількість рядків, а `n` — кількість стовпців. Програма має заповнити квадрат розміром `m` на `n` числами від `0` до `m * n - 1` послідовно зліва направо та зверху вниз і вивести його на екран.

**Вхідні дані**: Два цілі числа `m` і `n` (1 ≤ `m`, `n` ≤ 100).

**Вихідні дані**: Квадрат розміром `m` на `n`, заповнений послідовними числами від `0` до `m * n - 1`.

**Приклад**:

Вхід:
```
3 4
```

Вихід:
```
0  1  2  3
4  5  6  7
8  9 10 11
``` */

#include <iostream>
int main() {
	int m, n;
	std::cout << "Enter m and n" << std::endl;
	std::cin >> m >> n;
	int p = 0;
	for (int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if (p < 10) {
				std::cout << p << "  ";
				p++;
			}
			else {
				std::cout << p << " ";
				p++;
			}
		}
		std::cout << std::endl;
	}
}

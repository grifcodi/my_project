/* ### Задача 5: Заповнення прямокутника спіраллю

**Умова**: Користувач вводить два цілі числа `m` і `n`, де `m` — кількість рядків, а `n` — кількість стовпців. Програма має заповнити прямокутник розміром `m` на `n` числами у вигляді "спіралі": починаючи з верхнього лівого кута, рухаючись праворуч, потім вниз, потім ліворуч і так далі, заповнюючи прямокутник по спіралі до середини.

**Вхідні дані**: Два цілі числа `m` і `n` (1 ≤ `m`, `n` ≤ 100).

**Вихідні дані**: Прямокутник розміром `m` на `n`, заповнений числами по спіралі.

**Приклад**:

Вхід:
```
3 4
```

Вихід:
```
0  1  2  3
9 10 11  4
8  7  6  5

0  1  2
9 10  3
8 11  4
7  6  5


6 6
0  1  2  3  4  5
19 20 21 22 23 6
18 31 32 33 24 7
17 30 35 34 25 8
16 29 28 27 26 9
15 14 13 12 11 10


0 1
7 2
6 3
5 4

0  1  2  3  4
13 14 15 16 5
12 19 18 17 6
11 10 9  8  7

0  1  2  3
13 14 15 4
12 19 16 5
11 18 17 6
10 9  8  7

0  1  2  3  4  5  6
23 24 25 26 27 28 7
22 39 40 41 42 29 8
21 38 47 48 43 30 9
20 37 46 45 44 31 10
19 36 35 34 33 32 11
18 17 16 15 14 13 12

0  1  2  3  4  5  6
21 22 23 24 25 26 7
20 35 36 37 38 27 8
19 34 41 40 39 28 9
18 33 32 31 30 29 10
17 16 15 14 13 12 11

0  1  2  3  4  5
21 22 23 24 25 6
20 35 36 37 26 7
19 34 41 38 27 8
18 33 40 39 28 9
17 32 31 30 29 10
16 15 14 13 12 11

0  1  2  3  4  5  6  7
27 28 29 30 31 32 33 8
26 47 48 49 50 51 34 9
25 46 59 60 61 52 35 10
24 45 58 63 62 53 36 11
23 44 57 56 55 54 37 12
22 43 42 41 40 39 38 13
21 20 19 18 17 16 15 14

0  1  2  3
21 22 23 4
20 35 24 5
19 34 25 6
18 33 26 7
17 32 27 8
16 31 28 9
15 30 29 10
14 13 12 11

0  1  2  3  4
19 20 21 22 5
18 31 32 23 6
17 30 33 24 7
16 29 34 25 8
15 28 27 26 9
14 13 12 11 10

0  1  2  3  4  5  6
19 20 21 22 23 24 7
18 31 32 33 34 25 8
17 30 29 28 27 26 9
16 15 14 13 12 11 10

00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44
50 51 52 53 54
60 61 62 63 64

``` */

#include <iostream>
int main() {
	int m, n;
	std::cout << "Enter m and n" << std::endl;
	std::cin >> m >> n;
	if (m >= n) {
		for (int row = 0; row < m; row++) {
			for (int column = 0; column < n; column++) {
				if (row < (n+1)/2 && column >= row && column < n-row) {
					std::cout << column << " ";
				}
				else if (row >= m-(n+1)/2 && column >= m-1-row && column < n+m-1-row) {
					std::cout << "* ";
				}
				else if (true) {
					std::cout << "^ ";
				}
				else if (true) {
					std::cout << "< ";
				}
				else {
					std::cout << "> ";
				}
			}
			std::cout << std::endl;
		}
	}
	else {
		for (int row = 0; row < m; row++) {
                        for (int column = 0; column < n; column++) {
                                if (row < (m+1)/2 && column >= row && column < n-row) {
                                        std::cout << column << " ";
                                }
                                else if (true) {
                                        std::cout << "^ ";
                                }
                                else if (true) {
                                        std::cout << "< ";
                                }
                                else if (true) {
                                        std::cout << "> ";
                                }
                                else {
                                        std::cout << "* ";
                                }
                        }
                        std::cout << std::endl;
                }
        }
}
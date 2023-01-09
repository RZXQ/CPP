# Lesson 36

[toc]

## 1. 回到上一讲

![CleanShot 2023-01-09 at 16.58.15@2x](Lesson 36.assets/CleanShot 2023-01-09 at 16.58.15@2x.png)

![CleanShot 2023-01-09 at 16.58.25@2x](Lesson 36.assets/CleanShot 2023-01-09 at 16.58.25@2x.png)

## 2. 变量的作用域

![CleanShot 2023-01-09 at 17.36.39@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.36.39@2x.png)

![CleanShot 2023-01-09 at 17.36.48@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.36.48@2x.png)

![CleanShot 2023-01-09 at 17.36.53@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.36.53@2x.png)

![CleanShot 2023-01-09 at 17.37.04@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.37.04@2x.png)

![CleanShot 2023-01-09 at 17.37.11@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.37.11@2x.png)

## 3. 变量的作用域二

![CleanShot 2023-01-09 at 17.37.43@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.37.43@2x.png)

![CleanShot 2023-01-09 at 17.37.54@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.37.54@2x.png)

![CleanShot 2023-01-09 at 17.38.13@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.38.13@2x.png)

![CleanShot 2023-01-09 at 17.38.24@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.38.24@2x.png)

![CleanShot 2023-01-09 at 17.39.22@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.39.22@2x.png)

![CleanShot 2023-01-09 at 17.39.34@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.39.34@2x.png)

![CleanShot 2023-01-09 at 17.39.43@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.39.43@2x.png)

![CleanShot 2023-01-09 at 17.39.54@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.39.54@2x.png)

## 4. 素数

![CleanShot 2023-01-09 at 17.48.06@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.48.06@2x.png)

## 5. 素数筛法

![CleanShot 2023-01-09 at 17.52.01@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.52.01@2x.png)

![CleanShot 2023-01-09 at 17.52.22@2x](Lesson 36.assets/CleanShot 2023-01-09 at 17.52.22@2x.png)

## 6. 练一练

![CleanShot 2023-01-10 at 00.08.05@2x](Lesson 36.assets/CleanShot 2023-01-10 at 00.08.05@2x.png)

## 7. 欢乐秀一秀

![CleanShot 2023-01-10 at 00.13.18@2x](Lesson 36.assets/CleanShot 2023-01-10 at 00.13.18@2x.png)

![CleanShot 2023-01-10 at 00.13.35@2x](Lesson 36.assets/CleanShot 2023-01-10 at 00.13.35@2x.png)

## 8. 总结

![CleanShot 2023-01-10 at 00.13.46@2x](Lesson 36.assets/CleanShot 2023-01-10 at 00.13.46@2x.png)

## 9. 亲自出码

![CleanShot 2023-01-10 at 00.13.56@2x](Lesson 36.assets/CleanShot 2023-01-10 at 00.13.56@2x.png)

## 10. 代码

1. `变量的作用域.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   
   int x = 10;
   int y = 20;
   
   void test() {
       int x = 30;
       cout << "test: " << x << endl;
       cout << "test: " << y << endl;
   }
   
   // 变量的作用域
   int main() {
       test();
       cout << "main: " << x << endl;
       cout << "main: " << y << endl;
       return 0;
   }
   ```

2. `求指定区间内的素数.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   // 判断当前数字是否为素数
   int isPrime(int x) {
       if (x <= 1) {
           return 0;
       }
       for (int i = 2; i < x; i++) {
           if (x % i == 0) {
               return 0;
           }
       }
       return 1;
   }
   
   int main() {
       int m, n;
       cin >> m >> n;
       for (int i = m; i <= n; i++) {
           if (isPrime(i)) {
               cout << i << " ";
           }
       }
       return 0;
   }
   ```

3. `素数筛法.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   int isPrime[10001];
   
   int main() {
       int n;
       cin >> n;
       for (int i = 0; i < 10001; i++) {
           isPrime[i] = 1;
       }
       for (int i = 2; i <= n; i++) {
           if (isPrime[i] == 1) {
               for (int j = i * 2; j <= n; j = j + i) {
                   isPrime[j] = 0;
               }
           }
       }
       for (int i = 2; i < n; i++) {
           if (isPrime[i] == 1) {
               cout << i << " ";
           }
       }
       return 0;
   }
   ```

4. `素数对.cpp`

   ```cpp
   #include <iostream>
   #include <cmath>
   
   using namespace std;
   
   // 判断是否为素数
   int prime(int n) {
       for (int i = 2; i <= sqrt(n); i++) {
           if (n % i == 0) {
               return 0;
           }
       }
       return 1;
   }
   
   int main() {
       int n;
       cin >> n;
       if (n < 5) {
           cout << "empty";
           return 0;
       }
       for (int i = 3; i <= n - 2; i++) {
           if (prime(i) && prime(i + 2)) {
               cout << i << " " << i + 2 << endl;
           }
       }
       return 0;
   }
   ```

   

5. `算术表达式求值.cpp`

   ```cpp
   #include <iostream>
   #include <iomanip>
   
   using namespace std;
   
   int add(int a, int b) {
       return a + b;
   }
   
   int sub(int a, int b) {
       return a - b;
   }
   
   int mul(int a, int b) {
       return a * b;
   }
   
   double div(int a, int b) {
       return a * 1.0 / b;
   }
   
   int main() {
       int m, n;
       char x;
       double c;
       cin >> m >> x >> n;
       if (x == '+') {
           c = add(m, n);
       }
       if (x == '-') {
           c = sub(m, n);
       }
       if (x == '*') {
           c = mul(m, n);
       }
       if (x == '/') {
           c = div(m, n);
       }
       cout << fixed << setprecision(2) << c << endl;
   }
   ```
# Lesson 34

[toc]

## 1. 回到上一讲

![CleanShot 2023-01-09 at 14.40.40@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.40.40@2x.png)

![CleanShot 2023-01-09 at 14.47.11@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.47.11@2x.png)

## 2. 计算机英语

![CleanShot 2023-01-09 at 14.47.42@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.47.42@2x.png)

## 3. 认识函数

![CleanShot 2023-01-09 at 14.50.14@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.50.14@2x.png)

![CleanShot 2023-01-09 at 14.50.23@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.50.23@2x.png)

![CleanShot 2023-01-09 at 14.50.30@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.50.30@2x.png)

![CleanShot 2023-01-09 at 14.50.37@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.50.37@2x.png)

## 4. 函数的返回值

![CleanShot 2023-01-09 at 14.53.40@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.53.40@2x.png)

![CleanShot 2023-01-09 at 14.54.04@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.54.04@2x.png)

## 5. 码到成功

![CleanShot 2023-01-09 at 14.56.27@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.56.27@2x.png)

## 6. 函数的声明

![CleanShot 2023-01-09 at 14.59.21@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.59.21@2x.png)

![CleanShot 2023-01-09 at 14.59.41@2x](Lesson 34.assets/CleanShot 2023-01-09 at 14.59.41@2x.png)

![CleanShot 2023-01-09 at 15.03.00@2x](Lesson 34.assets/CleanShot 2023-01-09 at 15.03.00@2x.png)

![CleanShot 2023-01-09 at 15.03.23@2x](Lesson 34.assets/CleanShot 2023-01-09 at 15.03.23@2x.png)

## 7. 练一练

![CleanShot 2023-01-09 at 15.03.51@2x](Lesson 34.assets/CleanShot 2023-01-09 at 15.03.51@2x.png)

## 8. 秀一秀

![CleanShot 2023-01-09 at 15.17.56@2x](Lesson 34.assets/CleanShot 2023-01-09 at 15.17.56@2x.png)

![CleanShot 2023-01-09 at 15.18.10@2x](Lesson 34.assets/CleanShot 2023-01-09 at 15.18.10@2x.png)

## 9. 总结

![CleanShot 2023-01-09 at 15.18.18@2x](Lesson 34.assets/CleanShot 2023-01-09 at 15.18.18@2x.png)

## 10. 亲自出码

![CleanShot 2023-01-09 at 15.18.43@2x](Lesson 34.assets/CleanShot 2023-01-09 at 15.18.43@2x.png)

## 11. 代码

1. `day34.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   // 输出 12 个 * 号
   void out_put() {
       for (int i = 0; i < 12; i++) {
           cout << "*";
       }
       cout << endl;
       return;
   }
   
   // 求两个整数的和
   int fun(int a, int b) {
       int sum = 0;
       sum = a + b;
       return sum;
   }
   
   // 找出两个整数中较大数
   void max(int a, int b) {
       if (a > b) {
           cout << a;
       } else {
           cout << b;
       }
   }
   
   // 求四个数中的最大值
   int max(int a, int b, int c, int d) {
       // 把最大值存储到 a 中
       if (a < b) {
           a = b;
       }
       if (a < c) {
           a = c;
       }
       if (a < d) {
           a = d;
       }
       return a;
   }
   
   
   int main() {
       // // 输出 12 个 * 号
       // out_put();
   
       // // 求两个整数的和
       // int res = fun(5,6);
       // cout << res;
   
       // // 找出两个整数中较大数
       // max(99, 98);
   
       // // // 求四个数中的最大值
       // int a, b, c, d;
       // cin >> a >> b >> c >> d;
       // int n = max(a, b, c, d);
       // cout << n;
   
       return 0;
   }
   ```

2. `亲自出码.cpp`

   ```cpp
   #include <iostream>
   #include <string>
   
   using namespace std;
   
   // 判断正整数中是否包含某个数字
   bool check(string a, char b) {
       for (int i = 0; i < a.length(); i++) {
           if (a[i] == b) {
               return true;
           }
       }
       return false;
   }
   
   int main() {
       string c;
       char d;
       cin >> c;
       cin >> d;
       if (check(c, d)) {
           cout << "true";
       } else {
           cout << "false";
       }
   }
   ```


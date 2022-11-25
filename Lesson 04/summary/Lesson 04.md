# Lesson 04

[toc]

## 1. 回到上一讲

![CleanShot 2022-11-11 at 20.20.35@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.20.35@2x.png)

## 2. 计算机英语

![CleanShot 2022-11-11 at 20.20.50@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.20.50@2x.png)

## 3. 介绍基本数据类型

![CleanShot 2022-11-11 at 20.30.40@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.30.40@2x.png)

## 4. 整形

![CleanShot 2022-11-11 at 20.31.12@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.31.12@2x.png)

![CleanShot 2022-11-11 at 20.31.43@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.31.43@2x.png)

## 6. 长整型

![CleanShot 2022-11-11 at 20.37.24@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.37.24@2x.png)

## 7. sizeof 方法

![CleanShot 2022-11-11 at 20.40.34@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.40.34@2x.png)

![CleanShot 2022-11-11 at 20.40.48@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.40.48@2x.png)

## 8. 浮点型

![CleanShot 2022-11-11 at 20.45.28@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.45.28@2x.png)

![CleanShot 2022-11-11 at 20.45.47@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.45.47@2x.png)

![CleanShot 2022-11-11 at 20.45.47@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.45.47@2x-8170759.png)

## 9. 保留指定小数位数

![CleanShot 2022-11-11 at 20.49.39@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.49.39@2x.png)

## 10. 求阴影面积

![CleanShot 2022-11-11 at 20.53.32@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2020.53.32@2x.png)

## 11. 秀一秀

![CleanShot 2022-11-11 at 21.05.58@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2021.05.58@2x.png)

## 12. 总结

![CleanShot 2022-11-11 at 21.06.15@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2021.06.15@2x.png)

## 13. 亲自出码

![CleanShot 2022-11-11 at 21.06.20@2x](Lesson%2004.assets/CleanShot%202022-11-11%20at%2021.06.20@2x.png)

## 14. 代码

1. `day04.cpp`

   ```c++
   #include <iostream>
   #include <iomanip>
   
   using namespace std;
   
   int main() {
       // 测试整形溢出
       // int a = 100;    // 100
       // int b = -100;   // -100
       // int c = 5 / 3;  // 1
       // int d = 3.5;    // 3
       // int e = 2147483647;
       // int f = -2147483648;
   
       // 测试溢出
       // int g = 0, h = 0;
       // cout << e << " " << f << endl;
       // g = e + 1;
       // h = f - 1;
       // cout << g << " " << h << endl;
       // return 0;
   
       // 测试长整型数据溢出
       // long long a = 100;    // 100
       // long long b = -100;   // -100
       // long long c = 5 / 3;  // 1
       // long long d = 3.5;    // 3
       // long long e = 9223372036854775807;
       // long long f = -9223372036854775808;
       // // 测试溢出
       // long long g = 0, h = 0;
       // cout << e << " " << f << endl;
       // g = e + 1;
       // h = f - 1;
       // cout << g << " " << h << endl;
   
       // 计算变量存储空间的大小
       // short a;
       // int b;
       // long long c;
       // cout << sizeof(a) << " ";
       // cout << sizeof(b) << " ";
       // cout << sizeof(c) << endl;
   
       // 输出浮点型数
       // double a = 0.123456789;
       // double b = 123456789.123456789012345;
       // cout << a << endl;
       // cout << b << endl;
   
       // 保留指定小数位数
       // double a = 0.123456789;
       // double b = 123456789.123456789012345;
       // cout << fixed << setprecision(3) << a << endl;
       // cout << fixed << setprecision(3) << b << endl;
   
       // 计算阴影部分的面积
       // 声明两个 double 类型变量的存储边长, 并输入
       // double a, b;
       // cin >> a >> b;
       // // 声明三个 double 类型变量的存储总面积, 左上角空白, 右上角空白
       // double alls, as, bs;
       // // 计算面积
       // alls = a * a + b * b;
       // as = (a + b) * a / 2;
       // bs = b * b / 2;
       // // 输出
       // cout << "阴影的面积为: " << alls - as - bs << endl;
   
   
       return 0;
   }
   ```

2. `亲自出码`

   ```c++
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 声明变量r, 输入
       double r;
       cin >> r;
       // 计算周长, 面积
       double c, s, pi = 3.14;
       c = 2 * pi * r;
       s = pi * r * r;
       // 输出周长和面积
       cout << "圆的周长为: " << c << endl;
       cout << "圆的面积为: " << s << endl;
       return 0;
   }
   ```

   
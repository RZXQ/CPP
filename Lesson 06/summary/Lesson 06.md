# Lesson 06

[toc]

## 1. 回到上一讲

![CleanShot 2022-11-18 at 00.51.15@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2000.51.15@2x.png)

## 2. 计算机英语

![CleanShot 2022-11-18 at 00.53.22@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2000.53.22@2x.png)

## 3. 布尔型数据

![CleanShot 2022-11-18 at 00.54.47@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2000.54.47@2x.png)

![CleanShot 2022-11-18 at 00.56.06@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2000.56.06@2x.png)

## 4. 其他类型转 bool

![CleanShot 2022-11-18 at 01.01.51@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2001.01.51@2x.png)

## 5. 隐式转换

![CleanShot 2022-11-18 at 01.08.45@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2001.08.45@2x.png)

![CleanShot 2022-11-18 at 01.09.48@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2001.09.48@2x.png)

## 6. 强制转换

![CleanShot 2022-11-18 at 01.13.50@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2001.13.50@2x.png)

## 7. 练一练

![CleanShot 2022-11-18 at 01.15.55@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2001.15.55@2x.png)

## 8. 类型转换之溢出

![CleanShot 2022-11-18 at 01.16.45@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2001.16.45@2x.png)

## 9. 欢乐秀一秀

![CleanShot 2022-11-18 at 01.18.26@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2001.18.26@2x.png)

## 10. 总结

![CleanShot 2022-11-18 at 01.18.45@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2001.18.45@2x.png)

## 11. 亲自出码

![CleanShot 2022-11-18 at 01.19.06@2x](Lesson%2006.assets/CleanShot%202022-11-18%20at%2001.19.06@2x.png)

## 12. 代码

1. `day05.cpp`

   ```c++
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 定义布尔型变量并输出它的值
       // bool a = true;
       // bool b = false;
       // cout << a << " " << b << endl;
   
       // 布尔型和其他数据类型之间的转化关系
       // bool a = 10, b = 0, c = -20;
       // bool d = 10.1, e = 0.0;
       // bool f = '0', g = 'a';
       // 输出
       // cout << a << " " << b << " " << c << endl;
       // cout << d << " " << e << endl;
       // cout << f << " " << g << endl;
   
       // 数据类型间的隐式类型转换
       // char a = 'a';
       // short b = 3;
       // int c = 100;
       // long long d = 240;
       // double e = 3.12345;
       // cout << a + b << endl;
       // cout << c + d << endl;
       // cout << d + e << endl;
       // cout << e + a << endl;
   
       // 强制类型转换的方式
       // float a = 3.14, b = 3.14;
       // 方式一
       // cout << (int) a << endl;
       // 方式二
       // cout << int(a + b) << endl;
   
       // 强制类型转换中发生溢出
       // int a;
       // long long b = 53216547892;
       // a = (int) b;
       // cout << a << endl;
       // return 0;
   }
   ```

2. `亲自出码.cpp`

   ```c++
   #include <iostream>
   #include <iomanip>
   
   using namespace std;
   
   int main() {
       // 输入球的半径
       double r;
       cin >> r;
       // 计算球的提及
       const double pi = 3.14;
       double v = 1.0 * 4 / 3 * pi * r * r * r;
       return 0;
   }
   ```

   


# Lesson 02

[toc]

## 1. 回到上一讲

![CleanShot 2022-11-11 at 19.58.45@2x](Lesson%2002.assets/CleanShot%202022-11-11%20at%2019.58.45@2x.png)

## 2. 声明变量

![CleanShot 2022-11-11 at 19.59.28@2x](Lesson%2002.assets/CleanShot%202022-11-11%20at%2019.59.28@2x.png)![CleanShot 2022-11-11 at 19.58.45@2x]()

![CleanShot 2022-11-06 at 01.30.51@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.30.51@2x.png)

## 3. 变量的命名规则

![CleanShot 2022-11-06 at 01.33.07@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.33.07@2x.png)

## 4. 计算变量的和

![CleanShot 2022-11-06 at 01.34.08@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.34.08@2x-7669668.png)

## 5. 计算乘积

![CleanShot 2022-11-06 at 01.37.40@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.37.40@2x.png)

## 6. 计算变量的差商

![CleanShot 2022-11-06 at 01.40.54@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.40.54@2x.png)

## 7. 除法运算

![CleanShot 2022-11-06 at 01.43.55@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.43.55@2x.png)

## 8. 取余运算

![CleanShot 2022-11-06 at 01.45.00@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.45.00@2x.png)

![CleanShot 2022-11-06 at 01.45.16@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.45.16@2x.png)

## 9. 欢乐秀一秀

![CleanShot 2022-11-06 at 01.52.38@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.52.38@2x.png)

## 10. 总结

![CleanShot 2022-11-06 at 01.53.02@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.53.02@2x.png)

## 11. 亲自出码

![CleanShot 2022-11-06 at 01.53.15@2x](Lesson%2002.assets/CleanShot%202022-11-06%20at%2001.53.15@2x.png)

## 12. 代码

1. `day02.cpp`

   ```c++
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 声明整型变量 n, 并赋值为 1
       int n = 1;
   
       // 计算两个变量的和
       int c1 = 3;
       int c2 = 2;
   
       // 输出两个变量的和
       // cout << c1 + c2 << endl;
   
       // 输出两个变量的乘积
       // cout << c1 * c2 << endl;
   
       // 输出两个变量的差
       // cout << c1 - c2 << endl;
   
       // 输出两个变量的商
       cout << c1 / c2 << endl;
   
       // 计算一个三位数各个数位上的数字之和
       // 声明整形变量, 并赋值为一个三位数
       int a = 123;
       // 获取各位, 十位, 百位上的各个数字
       int g, s, b;
       g = a % 10;
       s = a / 10 % 10;
       b = a / 100;
       // 输出个位, 十位, 百位数字之和
       cout << g + s + b << endl;
       return 0;
   }
   ```

2. `亲自出码.cpp`

   ```c++
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 声明两个变量a, b, 并赋值
       int a = 200;
       int b = 30;
       // 输出两个变量的和, 差, 积, 商, 余数
       cout << a + b << endl;
       cout << a - b << endl;
       cout << a * b << endl;
       cout << a / b << endl;
       cout << a % b << endl;
       return 0;
   }
   ```


# Lesson 10

[toc]

## 1. 回到上一讲

![CleanShot 2022-11-26 at 00.04.28@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.04.28@2x.png)

## 2. 逻辑运算符

![CleanShot 2022-11-26 at 00.04.47@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.04.47@2x.png)

## 3. 逻辑非

![CleanShot 2022-11-26 at 00.05.10@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.05.10@2x.png)

## 4. 逻辑与

![CleanShot 2022-11-26 at 00.06.41@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.06.41@2x.png)

![CleanShot 2022-11-26 at 00.06.51@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.06.51@2x.png)

![CleanShot 2022-11-26 at 00.07.08@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.07.08@2x.png)

## 5. 逻辑与运算规则

![CleanShot 2022-11-26 at 00.09.16@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.09.16@2x.png)

## 6. 判断三角形

![CleanShot 2022-11-26 at 00.09.38@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.09.38@2x.png)

![CleanShot 2022-11-26 at 00.09.48@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.09.48@2x.png)

![CleanShot 2022-11-26 at 00.09.56@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.09.56@2x.png)

## 7. 逻辑或

![CleanShot 2022-11-26 at 00.12.14@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.12.14@2x.png)

![CleanShot 2022-11-26 at 00.12.34@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.12.34@2x.png)

## 8. 逻辑或运算规则

![CleanShot 2022-11-26 at 00.14.12@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.14.12@2x.png)

## 9. 判断一门课不及格

![CleanShot 2022-11-26 at 00.14.29@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.14.29@2x.png)

![CleanShot 2022-11-26 at 00.14.40@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.14.40@2x.png)

## 10. 判断运算符的优先级

![CleanShot 2022-11-26 at 00.16.40@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.16.40@2x.png)

## 11. 判断是否是闰年

![CleanShot 2022-11-26 at 00.16.58@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.16.58@2x.png)

![CleanShot 2022-11-26 at 00.17.21@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.17.21@2x.png)

## 12. 欢乐秀一秀

![CleanShot 2022-11-26 at 00.19.40@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.19.40@2x.png)

## 13. 总结

![CleanShot 2022-11-26 at 00.19.47@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.19.47@2x.png)

## 14. 亲自出码

![CleanShot 2022-11-26 at 00.20.26@2x](Lesson%2010.assets/CleanShot%202022-11-26%20at%2000.20.26@2x.png)

## 15. 代码

1. `day10.cpp`

   ```c++
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 练习逻辑运算符非!
       // cout << !true << endl;
       // cout << !false << endl;
       // cout << !(4 > 3) << endl;
       // cout << !(4 > 6) << endl;
   
       // 练习逻辑运算符与 &&
       // cout << (9 > 5 && 5 > 3) << endl;
       // cout << (9 > 5 && 5 < 3) << endl;
       // cout << (9 < 5 && 5 < 3) << endl;
   
       // 判断三条线段是否能构成一个三角形
       // 声明三个整形变量, 并输入
       // int a, b, c;
       // cin >> a >> b >> c;
       // 使用 if... else... 语句进行判断
       // if (a + b > c && b + c > a && a + c > b) {
       //     cout << "yes";
       // } else {
       //     cout << "no";
       // }
   
       // 练习逻辑运算符或 ||
       // cout << (7 > 4 || 3 > 1) << endl;
       // cout << (4 > 2 || 3 < 5) << endl;
       // cout << (6 > 8 || 7 > 9) << endl;
   
       // 判断一门成绩不及格
       // 声明两个变量, 并输入
       // int chinese, math;
       // cin >> chinese >> math;
       // 使用 if...else... 语句进行判断
       // if ((chinese >= 60 && math < 60) || (chinese < 60 && math >= 60)) {
       //     cout << 1;
       // } else {
       //     cout << 0;
       // }
   
       // 判断是否是闰年
       // 声明整形变量, 输入
       // int y;
       // cin >> y;
       // 使用 if...else... 语句进行判断
       // if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) {
       //     cout << "Yes";
       // } else {
       //     cout << "No";
       // }
       // return 0;
   }
   ```

2. `亲自出码`

   ```c++
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 声明两个整形变量, 并输入
       int x, y;
       cin >> x >> y;
       // 使用 if...else... 语句判断
       if (x >= -1 && x <= 1 && y >= -1 && y <= 1) {
           cout << "yes";
       } else {
           cout << "no";
       }
       return 0;
   }
   ```

   
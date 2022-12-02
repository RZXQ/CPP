# Lesson 11

[toc]

## 1. 回到上一讲

![CleanShot 2022-12-02 at 19.53.30@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2019.53.30@2x.png)

## 2. 三目运算符

![CleanShot 2022-12-02 at 19.54.45@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2019.54.45@2x.png)

![CleanShot 2022-12-02 at 19.55.13@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2019.55.13@2x.png)

## 3. 比较两个数的大小

![CleanShot 2022-12-02 at 19.57.13@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2019.57.13@2x.png)

## 4. 输出三个数中的最大值

![CleanShot 2022-12-02 at 19.58.35@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2019.58.35@2x.png)

![CleanShot 2022-12-02 at 19.58.54@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2019.58.54@2x.png)

## 5. 练一练

![CleanShot 2022-12-02 at 20.00.38@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2020.00.38@2x.png)

## 6. 欢乐秀一秀

![CleanShot 2022-12-02 at 20.02.33@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2020.02.33@2x.png)

## 7. 总结

![CleanShot 2022-12-02 at 20.02.43@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2020.02.43@2x.png)

## 8. 亲自出码

![CleanShot 2022-12-02 at 20.02.53@2x](Lesson%2011.assets/CleanShot%202022-12-02%20at%2020.02.53@2x.png)

## 9. 代码

1. `day11.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 练习三目运算符
       // cout << (3 > 2 ? 4 : 5); // 4
       // cout << (4 > 5 ? 4 : 5); // 5
   
       // 使用三目运算符比较两个数的大小
       // int a, b;
       // cin >> a >> b;
       // cout << (a > b ? a : b) << endl;
   
       // 使用三目运算符比较三个数中最大的数并输出
       // int a, b, c;
       // cin >> a >> b >> c;
       // cout << (a > b ? (a > c ? a : c) : (b > c ? b : c));
   
       // 使用三目运算符比较三个数中最小的数并输出
       // int a, b, c;
       // cin >> a >> b >> c;
       // cout << (a < b ? (a < c ? a : c) : (b < c ? b : c));
   
       return 0;
   }
   ```

2. `亲自出码.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 声明整型变量, 存储成绩, 输入
       int n;
       cin >> n;
       // 使用三目运算符进行判断, 输出等级
       cout << (n >= 90 ? 'A' : (n >= 60 ? 'B' : 'C')) << endl;
       return 0;
   }
   ```
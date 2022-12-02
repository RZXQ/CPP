# Lesson 13

[toc]

## 1. 回到上一讲

![CleanShot 2022-12-02 at 20.44.07@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.44.07@2x.png)

## 2. 计算机英语

![CleanShot 2022-12-02 at 20.44.20@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.44.20@2x.png)

## 3. while 语句

![CleanShot 2022-12-02 at 20.44.40@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.44.40@2x.png)

![CleanShot 2022-12-02 at 20.44.55@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.44.55@2x.png)

![CleanShot 2022-12-02 at 20.45.04@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.45.04@2x.png)

![CleanShot 2022-12-02 at 20.45.13@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.45.13@2x.png)

## 4. while 输出 1 - 100

![CleanShot 2022-12-02 at 20.45.28@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.45.28@2x.png)

## 5. 累加器

![CleanShot 2022-12-02 at 20.49.08@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.49.08@2x.png)

## 6. 输出被 3 整除的数

![CleanShot 2022-12-02 at 20.53.06@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.53.06@2x.png)

![CleanShot 2022-12-02 at 20.53.26@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.53.26@2x.png)

## 7. 死循环

![CleanShot 2022-12-02 at 20.56.05@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.56.05@2x.png)

## 8. break

![CleanShot 2022-12-02 at 20.57.02@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.57.02@2x.png)

## 9. 练一练

![CleanShot 2022-12-02 at 20.58.32@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2020.58.32@2x.png)

## 10. 计算与指定数字相同的数字

![CleanShot 2022-12-02 at 21.00.07@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2021.00.07@2x.png)

![CleanShot 2022-12-02 at 21.00.18@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2021.00.18@2x.png)

## 11. 秀一秀

![CleanShot 2022-12-02 at 21.01.57@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2021.01.57@2x.png)

## 12. 总结

![CleanShot 2022-12-02 at 21.02.11@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2021.02.11@2x.png)

## 13. 亲自出码

![CleanShot 2022-12-02 at 21.02.18@2x](Lesson%2013.assets/CleanShot%202022-12-02%20at%2021.02.18@2x.png)

## 14. 代码

1. `day 13.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 使用 while 循环输出 1 到 100
       // 声明整型变量, 存储变化的数, 循环变量
       // int i = 1;
       // 使用 while 循环循环进行输出
       // while (i <= 100) {
       // 条件为真时重复做的事情
       // cout << i << " ";
       // i = i + 1; // 改变 i 的值
       // }
   
       // 累加器
       // int i = 1;
       // i++; // i = i + 1;
       // ++i;
       // cout << "i = " << i << endl;
   
       // i++ 和 ++i 的区别
       // i++ 先使用, 然后在自身的值上加 1
       // ++i 先在自身的值上加 1, 然后再使用
       // int i = 1;
       // cout << ++i << endl; // 2
       // cout << i << endl; // 2
       // cout << i++ << endl; // 1
       // cout << i << endl; // 2
   
       // 输出 1 - n 之间所有能被 3 整除的数
       // int n, i;
       // cin >> n;
       // 判断
       // if (n < 3) {
       //     cout << 0 << endl;
       // } else { // n >= 3
       // 列举所有的数
       // while (i <= n) {
       //     if (i % 3 == 0) {
       //         cout << i << " ";
       //     }
       //     i++; // 改变 i 的值
       // }
       // }
   
       // 输出死循环
       // int i = 0; // 计数
       // while (true) {
       //     cout << 6;
       //     i++;
       //     // 判断执行次数是否为 6
       //     if (i == 6) {
       //         break;
       //     }
       // }
   
       // 数字打印机的程序
       // int n;
       // while (true) {
       //     cin >> n;
       //     // 使用 if 语句判断输入的数字是否0
       //     if (n == 0) {
       //         break;
       //     }
       //     cout << n << endl;
       // }
   
       // 计算与制定数字相同的数的个数
       // int n, m;
       // int s = 0, temp;
       // cin >> n >> m;
       // while (n--) {
       //     cin >> temp;
       //     // 判断输入的数与指定的数是否相同
       //     if (temp == m) {
       //         s++;
       //     }
       // }
       // // 输出满足条件的数的个数
       // cout << s <<endl;
       return 0;
   }
   ```

2. `亲自出码.cpp`

   ```cpp
   #include <iostream>
   #include <iomanip>
   
   using namespace std;
   
   int main() {
       // 计算 n 个正整数的平均值, 保留 2 位小数
       // 声明整型变量 n, 输入整数的个数
       int n;
       cin >> n;
       int t = n;
       int temp, sum = 0;
       double avg;
       // 输入 n 个整数, 得到总和
       while (n--) {
           cin >> temp;
           sum += temp;
       }
       // 求平均值 平均值 = 总和 / 总个数
       avg = 1.0 * sum / t;
       // 输出平均值
       cout << fixed << setprecision(2) << avg << endl;
       return 0;
   }
   ```

   
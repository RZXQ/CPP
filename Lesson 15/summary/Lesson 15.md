# Lesson 15

[toc]

## 1. 回到上一讲

![CleanShot 2022-12-09 at 13.45.50@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2013.45.50@2x.png)

## 2. while 的区别

![CleanShot 2022-12-09 at 13.46.46@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2013.46.46@2x.png)

## 3. 求 n 个数中的最大值

![CleanShot 2022-12-09 at 13.50.35@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2013.50.35@2x.png)

## 4. 斐波那契数列

![CleanShot 2022-12-09 at 13.53.16@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2013.53.16@2x.png)

![CleanShot 2022-12-09 at 13.53.13@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2013.53.13@2x.png)

![CleanShot 2022-12-09 at 13.53.59@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2013.53.59@2x.png)

![CleanShot 2022-12-09 at 13.53.45@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2013.53.45@2x.png)

## 5. 练一练: 数字反转

![CleanShot 2022-12-09 at 13.57.36@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2013.57.36@2x.png)

## 6. 欢乐秀一秀

![CleanShot 2022-12-09 at 14.12.34@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2014.12.34@2x.png)

## 7. 总结

![CleanShot 2022-12-09 at 14.12.47@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2014.12.47@2x.png)

## 8. 亲自出码题目

![CleanShot 2022-12-09 at 14.12.56@2x](Lesson%2015.assetsts/CleanShot%202022-12-09%20at%2014.12.56@2x.png)

## 9. 代码

1. `day15.cpp`

   ```c++
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // while 和 do...while 的区别
       // do...while 循环
       // int i = 1;
       // do {
       //    cout << "i=" <<i <<endl;
       //    i++;
       // } while (false);
   
       // while 循环
       // int i = 1;
       // while (false) {
       //     cout << "i = " << i << endl;
       //     i++;
       // }
   
       // 输出 n 个正整数中的最大值
       // int n, temp, max = 0;
       // cin >> n;
       // while (n--) {
       //     cin >> temp;
       //     // 判断输入的数是否为最大值
       //     if (temp > max) {
       //         max = temp;
       //     }
       // }
       // // 输出最大值
       // cout << max << endl;
   
       // 斐波那契数列问题
       // int k, s = 0, i = 3;
       // int first = 1, second = 1;
       // cin >> k;
       // if (k == 1 || k == 2) {
       //     s = 1;
       // } else { // k >= 3
       //     // 反复求和, 通过前两个数的和得到后面数
       //     while (i <= k) {
       //         s = first + second;
       //         // 更新前两个数的值;
       //         first = second;
       //         second = s;
       //         i++;
       //     }
       // }
       // cout << s << endl;
   
       // 数字反转
       // int n, s = 0, a;
       // cin >> n;
       // if (n == 0) {
       //     s = 0;
       // }
       // // n不为0    123   321   3   2   32*10+1   321
       // while (n != 0) {
       //     a = n % 1;
       //     s = s * 10 + a;
       //     n = n / 10;
       // }
       // cout << s << endl;
   
       return 0;
   }
   ```

2. `亲自出码.cpp`

   ```c++
   #include <iostream>
   #include <iomanip>
   
   using namespace std;
   
   int main() {
       // // 输出 n 个整数的最小值, 最大值, 平均值
       // int n;
       // cin >> n;
       // int sum = 0, max = -1, min = 1001;
       // double avg = 0;
       // int t = n, temp;
       // while (n--) {
       //     cin >> temp;
       //     sum += temp;
       //     // 判断最小值
       //     if (temp < min) {
       //         min = temp;
       //     }
       //     // 判断最大值
       //     if (temp > max) {
       //         max = temp;
       //     }
       // }
       // // 计算平均值
       // avg = 1.0 * sum / t;
       // cout << min << " " << max << " ";
       // cout << fixed << setprecision(3) << avg << endl;
   
       return 0;
   }
   ```

   
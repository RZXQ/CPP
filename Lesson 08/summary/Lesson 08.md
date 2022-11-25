# Lesson 08

[toc]

## 1. 回到上一讲

![CleanShot 2022-11-25 at 18.03.40@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.03.40@2x.png)

## 2. 计算机英语

![CleanShot 2022-11-25 at 18.03.52@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.03.52@2x.png)

## 3. else 语句

![CleanShot 2022-11-25 at 18.04.17@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.04.17@2x.png)

![CleanShot 2022-11-25 at 18.04.35@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.04.35@2x.png)

## 4. 判断奇偶

![CleanShot 2022-11-25 at 18.12.36@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.12.36@2x.png)

![CleanShot 2022-11-25 at 18.12.55@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.12.55@2x.png)

## 5. 输出绝对值

![CleanShot 2022-11-25 at 18.20.20@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.20.20@2x.png)

## 6. if语句

![CleanShot 2022-11-25 at 18.22.36@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.22.36@2x.png)

![CleanShot 2022-11-25 at 18.22.49@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.22.49@2x.png)

![CleanShot 2022-11-25 at 18.23.28@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.23.28@2x.png)

## 7. 骑车与走路

![CleanShot 2022-11-25 at 18.26.29@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2018.26.29@2x.png)

## 8. 秀一秀

![CleanShot 2022-11-25 at 23.22.40@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2023.22.40@2x.png)

## 9. 总结

![CleanShot 2022-11-25 at 23.22.51@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2023.22.51@2x.png)

## 10. 亲自出码

![CleanShot 2022-11-25 at 23.22.59@2x](Lesson%2008.assets/CleanShot%202022-11-25%20at%2023.22.59@2x.png)

## 11. 代码

1. `day08.cpp`

   ```c++
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // if-else语句
       // bool is_sunny = true;
       // if (is_sunny == true) {
       //     cout << "去爬山";
       // } else {
       //     cout << "写作业";
       // }
   
       // int n;
       // cin >> n;
       // if (n % 2 == 0) {
       //     cout << "偶数";
       // } else { // 奇数
       //     cout << "奇数";
       // }
   
       // 输出一个整数的绝对值
       // int n;
       // cin >> n;
       // if (n > 0) {
       //     cout << n << endl;
       // } else { // n < 0
       //     cout << 0 - n << endl;
       // }
   
       // 判断分数的等级
       // int score;
       // cin >> score;
       // if (score >= 90) {
       //     cout << "等级A";
       // } else if (score >= 80) {
       //     cout << "等级B";
       // } else if (score >= 70) {
       //     cout << "等级C";
       // } else if (score >= 60) {
       //     cout << "等级D";
       // } else {
       //     cout << "不及格";
       // }
   
       // 判断骑车和走路哪种方式快
       // 生命整型变量 s
       // int s;
       // cin >> s;
       // double bt, wt;
       // 计算时间 时间 = 总距离 / 每秒走的距离
       // bt = 27 + s / 3.0 + 23;
       // wt = s / 1.2;
       // 判断哪种方式快
       // if (bt < wt) {
       //     cout << "Bike";
       // } else if (bt > wt) {
       //     cout << "Walk";
       // } else {
       //     cout << "All";
       // }
       // return 0;
   }
   ```

2. `亲自出码.cpp`

   ```c++
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 声明整形变量 n, 并输入
       int n;
       cin >> n;
       // 使用 if...else...语句判断是否是 5 的倍数
       if (n % 5 == 0) {
           cout << n / 5 << endl;
       } else { // n 不是 5 的倍数
           cout << "No";
       }
       return 0;
   }
   ```

   
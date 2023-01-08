# Day 26

[toc]

## 1. 回到上一讲

![CleanShot 2023-01-08 at 23.41.59@2x](Day 26.assets/CleanShot 2023-01-08 at 23.41.59@2x.png)

![CleanShot 2023-01-08 at 23.42.15@2x](Day 26.assets/CleanShot 2023-01-08 at 23.42.15@2x.png)

## 2. 二维数组的定义

![CleanShot 2023-01-08 at 23.46.53@2x](Day 26.assets/CleanShot 2023-01-08 at 23.46.53@2x.png)

![CleanShot 2023-01-08 at 23.47.22@2x](Day 26.assets/CleanShot 2023-01-08 at 23.47.22@2x.png)

![CleanShot 2023-01-08 at 23.47.40@2x](Day 26.assets/CleanShot 2023-01-08 at 23.47.40@2x.png)

## 3. 一维数组和二维数组的关系

![CleanShot 2023-01-08 at 23.49.11@2x](Day 26.assets/CleanShot 2023-01-08 at 23.49.11@2x.png)

![CleanShot 2023-01-08 at 23.49.26@2x](Day 26.assets/CleanShot 2023-01-08 at 23.49.26@2x.png)

![CleanShot 2023-01-08 at 23.49.35@2x](Day 26.assets/CleanShot 2023-01-08 at 23.49.35@2x.png)

## 4. 分行赋值

![CleanShot 2023-01-08 at 23.50.05@2x](Day 26.assets/CleanShot 2023-01-08 at 23.50.05@2x.png)

## 5. 顺序赋值

![CleanShot 2023-01-08 at 23.52.30@2x](Day 26.assets/CleanShot 2023-01-08 at 23.52.30@2x.png)

## 6. 部分元素赋值

![CleanShot 2023-01-08 at 23.54.21@2x](Day 26.assets/CleanShot 2023-01-08 at 23.54.21@2x.png)

## 7. 初始化

![CleanShot 2023-01-08 at 23.56.52@2x](Day 26.assets/CleanShot 2023-01-08 at 23.56.52@2x.png)

![CleanShot 2023-01-08 at 23.56.59@2x](Day 26.assets/CleanShot 2023-01-08 at 23.56.59@2x.png)

![CleanShot 2023-01-08 at 23.57.12@2x](Day 26.assets/CleanShot 2023-01-08 at 23.57.12@2x.png)

![CleanShot 2023-01-08 at 23.57.47@2x](Day 26.assets/CleanShot 2023-01-08 at 23.57.47@2x.png)

![CleanShot 2023-01-08 at 23.58.06@2x](Day 26.assets/CleanShot 2023-01-08 at 23.58.06@2x.png)

## 8. 练一练

![CleanShot 2023-01-09 at 00.00.44@2x](Day 26.assets/CleanShot 2023-01-09 at 00.00.44@2x.png)

## 9. 欢乐秀一秀

![CleanShot 2023-01-09 at 00.02.48@2x](Day 26.assets/CleanShot 2023-01-09 at 00.02.48@2x.png)

![CleanShot 2023-01-09 at 00.03.00@2x](Day 26.assets/CleanShot 2023-01-09 at 00.03.00@2x.png)

## 10. 总结

![CleanShot 2023-01-09 at 00.03.09@2x](Day 26.assets/CleanShot 2023-01-09 at 00.03.09@2x.png)

## 11. 亲自出码

![CleanShot 2023-01-09 at 00.03.20@2x](Day 26.assets/CleanShot 2023-01-09 at 00.03.20@2x.png)

## 12. 代码

1. `day 26.cpp`

   ```cpp
   # include <iostream>
   
   using namespace std;
   
   int main() {
       // // 定义一个整形的二维数组 a, 行长度是 2, 列长度是 3, 存储 6 个元素
       // int a[2][3];
   
       // // 定义二维数组 a, 并分行赋值
       // int a[3][4] = {{1, 2, 3, 4},
       //                {},
       //                {4, 6}};
       // // 访问下标为 1, 1 的元素
       // cout << a[1][1] << endl;
       // // 访问下标为 0, 2 的元素
       // cout << a[0][2] << endl;
   
       // // 顺序赋值
       // int b[4][4] = {1, 2, 3};
       // // 访问下标为 0, 2 的元素
       // cout << b[0][2] << endl;
   
       // // 部分元素赋值
       // int c[][3] = {1, 2, 3, 4, 5}; // 2 行 3 列
       // cout << c[1][2] << endl;
       // // 获取数值 5
       // cout << c[1][2] << endl;
   
       // // 二维数组初始化为 0
       // int b[4][4] = {};
       // cout << b[2][2] << endl;
   
       // // 获取小紫的英语成绩
       // double score[3][3] = {{90, 96,   92},
       //                       {94, 95.5, 90},
       //                       {96, 99,   89}};
       // // 获取小紫的英语成绩
       // cout << score[2][2] << endl;
   
       // // 声明二维数组存储学生的身高和体重信息
       // int info[2][2] = {{160, 45},
       //                   {150, 35}};
       // // 获取两位同学的身高和体重
       // cout << info[0][0] << endl;
       // cout << info[0][1] << endl;
       // cout << info[1][0] << endl;
       // cout << info[1][1] << endl;
   
       // return 0;
   }
   ```

2. `亲自出码.cpp`

   ```cpp
   # include <iostream>
   
   using namespace std;
   
   int main() {
       // // 定义一个整形的二维数组 a, 行长度是 2, 列长度是 3, 存储 6 个元素
       // int a[2][3];
   
       // // 定义二维数组 a, 并分行赋值
       // int a[3][4] = {{1, 2, 3, 4},
       //                {},
       //                {4, 6}};
       // // 访问下标为 1, 1 的元素
       // cout << a[1][1] << endl;
       // // 访问下标为 0, 2 的元素
       // cout << a[0][2] << endl;
   
       // // 顺序赋值
       // int b[4][4] = {1, 2, 3};
       // // 访问下标为 0, 2 的元素
       // cout << b[0][2] << endl;
   
       // // 部分元素赋值
       // int c[][3] = {1, 2, 3, 4, 5}; // 2 行 3 列
       // cout << c[1][2] << endl;
       // // 获取数值 5
       // cout << c[1][2] << endl;
   
       // // 二维数组初始化为 0
       // int b[4][4] = {};
       // cout << b[2][2] << endl;
   
       // // 获取小紫的英语成绩
       // double score[3][3] = {{90, 96,   92},
       //                       {94, 95.5, 90},
       //                       {96, 99,   89}};
       // // 获取小紫的英语成绩
       // cout << score[2][2] << endl;
   
       // // 声明二维数组存储学生的身高和体重信息
       // int info[2][2] = {{160, 45},
       //                   {150, 35}};
       // // 获取两位同学的身高和体重
       // cout << info[0][0] << endl;
       // cout << info[0][1] << endl;
       // cout << info[1][0] << endl;
       // cout << info[1][1] << endl;
   
       // return 0;
   }
   ```

   
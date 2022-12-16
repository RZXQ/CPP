# Lesson 18

[toc]

## 1. 回到上一讲

![CleanShot 2022-12-16 at 20.21.11@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.21.11@2x.png)

## 2. 重定向

![CleanShot 2022-12-16 at 20.23.57@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.23.57@2x.png)

![CleanShot 2022-12-16 at 20.25.15@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.25.15@2x.png)

![CleanShot 2022-12-16 at 20.25.26@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.25.26@2x.png)

![CleanShot 2022-12-16 at 20.25.54@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.25.54@2x.png)

![CleanShot 2022-12-16 at 20.26.07@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.26.07@2x.png)

![CleanShot 2022-12-16 at 20.26.15@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.26.15@2x.png)

## 3. 文件操作求和

![CleanShot 2022-12-16 at 20.34.50@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.34.50@2x.png)

## 4. 输入输出流

![CleanShot 2022-12-16 at 20.39.42@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.39.42@2x.png)

![CleanShot 2022-12-16 at 20.39.58@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.39.58@2x.png)

![CleanShot 2022-12-16 at 20.40.14@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.40.14@2x.png)

![CleanShot 2022-12-16 at 20.40.31@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.40.31@2x.png)

![CleanShot 2022-12-16 at 20.41.10@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.41.10@2x.png)

## 5. 练一练

![CleanShot 2022-12-16 at 20.47.48@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.47.48@2x.png)

## 6. 欢乐秀一秀

![CleanShot 2022-12-16 at 20.53.00@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.53.00@2x.png)

## 7. 总结

![CleanShot 2022-12-16 at 20.53.15@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.53.15@2x.png)

## 8. 亲自出码

![CleanShot 2022-12-16 at 20.53.31@2x](Lesson%2018.assets/CleanShot%202022-12-16%20at%2020.53.31@2x.png)

## 9. 代码

1. `day18.cpp`

   ```cpp
   #include<cstdio>
   #include <fstream>
   
   using namespace std;
   // // 创建全局的输入，输出文件对象
   // ifstream cin("test1.in");
   // ofstream cout("test1.out");
   
   int main() {
       // // 重定向
       // // 打开输入文件，输出文件
       // freopen("test.in", "r", stdin);
       // freopen("test.out", "w", stdout);
       // // 正常的逻辑代码
       // int a;
       // cin >> a;
       // cout << a;
       // // 关闭输入文件和输出文件
       // fclose(stdin);
       // fclose(stdout);
   
       // // 文件操作求和
       // // 打开输入输出文件
       // freopen("sum.in", "r", stdin);
       // freopen("sum.out", "w", stdout);
       // // 正常解题代码
       // int temp, sum = 0;
       // while (cin >> temp) {
       //     sum += temp;
       // }
       // cout << sum;
       // // 关闭输入输出文件
       // fclose(stdin);
       // fclose(stdout);
   
       // // 输出输出流
       // // 正常的逻辑代码
       // int a;
       // cin >> a;
       // cout << a;
       // // 关闭输出输出文件
       // cin.close();
       // cout.close();
   
       // // 练一练
       // // 正常的逻辑代码
       // int a, b;
       // cin >> a >> b;
       // cout << a * b;
       //
       // // 关闭输入输出文件
       // cin.close();
       // cout.close();
   
       return 0;
   }
   ```

2. `亲自出码.cpp`

   ```cpp
   #include<fstream>
   
   using namespace std;
   // 创建全局所输入，输出文件对象
   ifstream cin("sum1.in");
   ofstream cout("sum1.out");
   
   int main() {
       // 正常的逻辑代码
       int a, b;
       cin >> a >> b;
       cout << a * a + b * b;
       // 关闭输入输出文件
       cin.close();
       cout.close();
       return 0;
   }
   ```
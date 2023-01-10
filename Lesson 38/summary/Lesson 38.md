# Lesson 38

[toc]

## 1. 回到上一讲

![CleanShot 2023-01-10 at 00.58.53@2x](Lesson 38.assets/CleanShot 2023-01-10 at 00.58.53@2x.png)

## 2. 结构体

![CleanShot 2023-01-10 at 09.31.48@2x](Lesson 38.assets/CleanShot 2023-01-10 at 09.31.48@2x.png)

![CleanShot 2023-01-10 at 09.32.01@2x](Lesson 38.assets/CleanShot 2023-01-10 at 09.32.01@2x.png)

![CleanShot 2023-01-10 at 09.32.14@2x](Lesson 38.assets/CleanShot 2023-01-10 at 09.32.14@2x.png)

![CleanShot 2023-01-10 at 09.32.26@2x](Lesson 38.assets/CleanShot 2023-01-10 at 09.32.26@2x.png)

![CleanShot 2023-01-10 at 09.32.38@2x](Lesson 38.assets/CleanShot 2023-01-10 at 09.32.38@2x.png)

## 3.结构体变量的定义及初始化

![CleanShot 2023-01-10 at 09.40.40@2x](Lesson 38.assets/CleanShot 2023-01-10 at 09.40.40@2x.png)

![CleanShot 2023-01-10 at 09.40.55@2x](Lesson 38.assets/CleanShot 2023-01-10 at 09.40.55@2x.png)

## 4. 结构体数组

![CleanShot 2023-01-10 at 10.29.31@2x](Lesson 38.assets/CleanShot 2023-01-10 at 10.29.31@2x.png)

![CleanShot 2023-01-10 at 10.31.37@2x](Lesson 38.assets/CleanShot 2023-01-10 at 10.31.37@2x.png)

## 5. 成绩统计

![CleanShot 2023-01-10 at 11.00.13@2x](Lesson 38.assets/CleanShot 2023-01-10 at 11.00.13@2x.png)

## 6. 练一练

![CleanShot 2023-01-10 at 11.55.38@2x](Lesson 38.assets/CleanShot 2023-01-10 at 11.55.38@2x.png)

## 7. 欢乐秀一秀

![CleanShot 2023-01-10 at 13.30.14@2x](Lesson 38.assets/CleanShot 2023-01-10 at 13.30.14@2x.png)

![CleanShot 2023-01-10 at 13.30.27@2x](Lesson 38.assets/CleanShot 2023-01-10 at 13.30.27@2x.png)

## 8. 总结

![CleanShot 2023-01-10 at 13.31.01@2x](Lesson 38.assets/CleanShot 2023-01-10 at 13.31.01@2x.png)

## 9. 亲自出码

![CleanShot 2023-01-10 at 13.31.13@2x](Lesson 38.assets/CleanShot 2023-01-10 at 13.31.13@2x.png)

## 10. 代码

1. `结构体变量的定义及初始化 & 结构体数组.cpp`

   ```cpp
   #include <iostream>
   #include <string>
   
   using namespace std;
   
   // 定义结构体 student
   struct student {
       int num;
       string name;
       double chinese, math, english;
   };
   
   int main() {
       // 定义 student 类型的结构体变量
       student a;
       a.num = 10001;
       a.name = "狮子王";
       a.chinese = 89;
       a.math = 56;
       a.english = 65;
       cout << a.name << endl;
   
       // 定义结构体数组存储多个学生信息
       student stu[100];
       for (int i = 0; i < 3; i++) {
           cin >> stu[i].num;
           cin >> stu[i].name;
           cin >> stu[i].chinese;
           cin >> stu[i].math;
           cin >> stu[i].english;
       }
       swap(stu[0], stu[2]);
       for (int i = 0; i < 3; i++) {
           cout << stu[i].num << ' ' << stu[i].name << ' ' << stu[i].chinese << ' ' << stu[i].math << ' ' << ' '
                << stu[i].english << endl;
       }
       return 0;
   }
   ```

2. `结构体的使用 - 成绩统计.cpp`

   ```cpp
   #include <iostream>
   #include <string>
   
   using namespace std;
   struct student {
       string name;
       int chinese, math;
       int total;
   };
   
   student stu[101];
   
   int main() {
       int n;
       cin >> n;
       // 初始化学生数据
       for (int i = 0; i < n; i++) {
           cin >> stu[i].name >> stu[i].chinese >> stu[i].math;
           stu[i].total = stu[i].chinese + stu[i].math;
       }
       // 寻找最高分学生
       int index = 0;
       for (int i = 1; i < n; i++) {
           if (stu[i].total > stu[index].total) {
               index = i;
           }
       }
       cout << stu[index].name << ' ' << stu[index].chinese << ' ' << stu[index].math << ' ' << stu[index].total;
       return 0;
   }
   ```

3. `猴子选大王.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   struct m {
       int num;
       int data;
   };
   m a[1001];
   
   // 猴子选大王
   int main() {
       int num1, max = 0, n;
       cin >> num1;
       for (int i = 0; i < num1; i++) {
           cin >> a[i].num >> a[i].data;
           if (max < a[i].data) {
               max = a[i].data;
               n = i;
           }
       }
       cout << a[n].num << ' ' << a[n].data;
       return 0;
   }
   ```

4. `排身高.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   struct student {
       int num, h;
   };
   student stu[101];
   
   int main() {
       int n, max = 0, m;
       cin >> n;
       for (int i = 1; i <= n; i++) {
           stu[i].num = i;
           cin >> stu[i].h;
           if (max < stu[i].h) {
               max = stu[i].h;
               m = i;
           }
       }
       cout << stu[m].num << ' ' << stu[m].h;
   }
   ```
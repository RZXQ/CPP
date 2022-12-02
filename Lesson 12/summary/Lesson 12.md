# Lesson 12

[toc]

## 1. 回到上一讲

![CleanShot 2022-12-02 at 20.14.36@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.14.36@2x.png)

## 2. 计算机英语

![CleanShot 2022-12-02 at 20.14.53@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.14.53@2x.png)

## 3. switch 语句

![CleanShot 2022-12-02 at 20.15.02@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.15.02@2x.png)

![CleanShot 2022-12-02 at 20.15.30@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.15.30@2x.png)

## 4. break 关键字

![CleanShot 2022-12-02 at 20.19.16@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.19.16@2x.png)

## 5. 练一练

![CleanShot 2022-12-02 at 20.19.03@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.19.03@2x.png)

## 6. 分数等级划分

![CleanShot 2022-12-02 at 20.21.51@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.21.51@2x.png)

![CleanShot 2022-12-02 at 20.21.46@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.21.46@2x.png)

## 7. 小 Q 买笔

![CleanShot 2022-12-02 at 20.23.57@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.23.57@2x.png)

![CleanShot 2022-12-02 at 20.24.17@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.24.17@2x.png)

## 8. 欢乐秀一秀

![CleanShot 2022-12-02 at 20.29.23@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.29.23@2x.png)

## 9. 总结

![CleanShot 2022-12-02 at 20.29.32@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.29.32@2x.png)

## 10. 亲自出码

![CleanShot 2022-12-02 at 20.29.41@2x](Lesson%2012.assets/CleanShot%202022-12-02%20at%2020.29.41@2x.png)

## 11. 代码

1. `day 12.cpp`

   ```cpp
   #include <iostream>
   
   using namespace std;
   
   int main() {
       // 练习 switch 语句
       // cout << "请输入 A-C 之间的路口名" << endl;
       // char roadName;
       // cin >> roadName;
       // switch (roadName) {
       //     case 'A':
       //         cout << "A路口" << endl;
       //         break;
       //     case 'B':
       //         cout << "B路口" << endl;
       //         break;
       //     case 'C':
       //         cout << "C路口" << endl;
       //         break;
       //     default :
       //         cout << "没有你要找的路口" << endl;
   
       // 使用 switch 语句输出包的价格
       // int size;
       // cin >> size;
       // switch (size) {
       //     case 1:
       //         cout << "240 元" << endl;
       //         break;
       //     case 2:
       //         cout << "180 元" << endl;
       //         break;
       //     case 3:
       //         cout << "120 元" << endl;
       //         break;
       //     default:
       //         cout << "没有你输入的型号的包" << endl;
       // }
   
       // 使用 switch 语句划分成绩等级
       // int n;
       // cin >> n;
       // switch (n / 10) {
       //     case 10:
       //     case 9 :
       //         cout << "A";
       //         break;
       //     case 8:
       //     case 7:
       //     case 6:
       //         cout << "B";
       //         break;
       //     default:
       //         cout << "C";
       // }
   
       // 小 Q 买笔
       // int x, a, b, c; //a: 4 元支数, b: 5 元支数, c: 6 元支数
       // cin >> x;
       // a = x / 4;
       // switch (x % 4) {
       //     case 0:
       //         b = 0;
       //         c = 0;
       //         break;
       //     case 1:
       //         a -= 1;
       //         b = 1;
       //         c = 0;
       //         break;
       //     case 2:
       //         a -= 1;
       //         b = 0;
       //         c = 1;
       //         break;
       //     case 3:
       //         a -= 2;
       //         b = 1;
       //         c = 1;
       //         break;
       // }
       //
       // cout << "4 元: " << a << " 5 元: " << b << " 6 元: " << c << endl;
   
       return 0;
   }
   ```

2. `亲自出码.cpp`

   ```cpp
   #include <iostream>
   #include <iomanip>
   
   using namespace std;
   
   int main() {
       double apples = 3.00, pears = 2.50, oranges = 4.10, grapes = 10.20;
       cout << "[1]apples" << endl;
       cout << "[2]pears" << endl;
       cout << "[3]oranges" << endl;
       cout << "[4]grapes" << endl;
       int n;
       cin >> n;
       switch (n) {
           case 1:
               cout << "price = ";
               cout << fixed << setprecision(1) << apples << endl;
               break;
           case 2:
               cout << "price = ";
               cout << fixed << setprecision(1) << pears << endl;
               break;
           case 3:
               cout << "price = ";
               cout << fixed << setprecision(1) << oranges << endl;
               break;
           case 4:
               cout << "price = ";
               cout << fixed << setprecision(1) << grapes << endl;
               break;
       }
       return 0;
   }
   ```
# Lesson 03

[toc]

## 1. 回到上一讲

![CleanShot 2022-11-11 at 17.23.10@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.23.10@2x.png)

## 2. 交换变量的值 1

![CleanShot 2022-11-11 at 17.24.46@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.24.46@2x.png)

![CleanShot 2022-11-11 at 17.25.20@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.25.20@2x.png)

![CleanShot 2022-11-11 at 17.28.40@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.28.40@2x.png)

```c++
#include <iostream>

using namespace std;

int main() {
    // 交换两个变量的值
    // 声明三个变量
    int a = 3, b = 5, c;
    // 交换两个变量的值
    c = a;
    a = b;
    b = c;
    // 输出
    cout << a << " " << b << endl;
    return 0;
}
```

## 3. 交换变量的值 2

![CleanShot 2022-11-11 at 17.44.20@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.44.20@2x.png)

![CleanShot 2022-11-11 at 17.48.38@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.48.38@2x.png)

![CleanShot 2022-11-11 at 17.49.09@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.49.09@2x.png)

![CleanShot 2022-11-11 at 17.49.11@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.49.11@2x.png)

![CleanShot 2022-11-11 at 17.49.27@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.49.27@2x.png)

![CleanShot 2022-11-11 at 17.49.31@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.49.31@2x.png)

![CleanShot 2022-11-11 at 17.49.45@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.49.45@2x.png)

![CleanShot 2022-11-11 at 17.49.45@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.49.45@2x-8160191.png)

![CleanShot 2022-11-11 at 17.49.57@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.49.57@2x.png)

![CleanShot 2022-11-11 at 17.50.03@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.50.03@2x.png)

![CleanShot 2022-11-11 at 17.50.09@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.50.09@2x.png)

![CleanShot 2022-11-11 at 17.50.18@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2017.50.18@2x.png)

## 4. swap 方法

![CleanShot 2022-11-11 at 18.00.39@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2018.00.39@2x.png)

```

```

## 5. cin 语句

![CleanShot 2022-11-11 at 18.09.39@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2018.09.39@2x.png)![CleanShot 2022-11-11 at 18.10.24@2x](../Library/Application Support/CleanShot/media/media_2WPVDbSGYI/CleanShot 2022-11-11 at 18.10.24@2x.png)

![CleanShot 2022-11-11 at 18.10.42@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2018.10.42@2x.png)

## 6. 欢乐秀一秀

![CleanShot 2022-11-11 at 19.18.09@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2019.18.09@2x.png)

## 7. 总结

![CleanShot 2022-11-11 at 19.44.01@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2019.44.01@2x.png)

## 8. 亲自出码

![CleanShot 2022-11-11 at 19.45.58@2x](Lesson%2003.assets/CleanShot%202022-11-11%20at%2019.45.58@2x.png)

```c++
#include <iostream>

using namespace std;

int main() {
    // 声明三个变量
    int a, b, c;
    // 输入变量的值
    cin >> a >> b >> c;
    // 输出平方和
    cout << a * a + b * b + c * c << endl;
    return 0;
}
```

## 9. 代码

1. `day03.cpp`

```c++
#include <iostream>

using namespace std;

int main() {
    // 交换两个变量的值(一)
    // 声明三个变量
    // int a = 3, b = 5, c;
    // 交换两个变量的值
    //    c = a;
    //    a = b;
    //    b = c;
    // 输出
    // cout << a << " " << b << endl;

    // 交换两个变量的值(二)
    // 声明两个变量, 并赋值
    // int a = 3, b = 5;
    // 交换两个变量的值
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // 输出
    // cout << a << " " << b << endl;

    // 交换两个变量的值(三)
    // 使用 swap()方法交换两个变量的值
    // swap(a, b);
    // 输出
    // cout << a << " " << b << endl;

    // 输入三个变量的值, 并输出
    int a, b, c;
    // 输入变量的值
    cin >> a >> b >> c;
    // 输出
    cout << a << " " << b << " " << c << endl;

    //
    return 0;
}
```

2. `亲自出码.cpp`

```c++
#include <iostream>

using namespace std;

int main() {
    // 声明三个变量
    int a, b, c;
    // 输入变量的值
    cin >> a >> b >> c;
    // 输出平方和
    cout << a * a + b * b + c * c << endl;
    return 0;
}
```


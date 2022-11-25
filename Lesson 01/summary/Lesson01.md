# Lesson 01

[toc]

## 1. 程序框架

```c++
#include <iostream> // 包含头文件

using namespace std; // 使用标准命名空间

int main() { // 主函数是程序的入口
    cout << "Hello, World!" << endl;
    return 0; // 函数的返回值为 0
}
```

## 2. `cout`语句格式

![CleanShot 2022-11-06 at 01.03.39@2x](Lesson01.assets/CleanShot%202022-11-06%20at%2001.03.39@2x.png)

## 3. 输出金字塔

> 输出如图所示的图形![Screenshot of Safari (6-11-2022, 1-07-37 am)](Lesson01.assets/Screenshot of Safari (6-11-2022, 1-07-37 am).png)

## 4. 计算加减乘除

![CleanShot 2022-11-06 at 01.10.09@2x](Lesson01.assets/CleanShot%202022-11-06%20at%2001.10.09@2x.png)

## 5. 欢乐秀一秀

![CleanShot 2022-11-06 at 01.12.07@2x](Lesson01.assets/CleanShot%202022-11-06%20at%2001.12.07@2x.png)

## 6. 总结

![CleanShot 2022-11-06 at 01.12.27@2x](Lesson01.assets/CleanShot%202022-11-06%20at%2001.12.27@2x.png)

## 7. 亲自出码

![CleanShot 2022-11-06 at 01.12.49@2x](Lesson01.assets/CleanShot%202022-11-06%20at%2001.12.49@2x.png)

## 8. 代码

1. `day01.cpp`

   ```c++
   #include <iostream> // 包含头文件
   
   using namespace std; // 使用标准命名空间
   
   int main() { // 主函数是程序的入口
       // 输出字符串 "Hello, World!"
       cout << "Hello, World!" << endl;
   
       // 将 3 个数字进行拼接
       cout << 1 << 2 << 3 << endl;
       // 输出两个整数的和
       cout << 1 + 2 << endl;
       // 输出字符串
       cout << "1 + 2" << endl;
   
       // 加减乘除
       cout << 1 * 2 + 3 * 4 + 5 * 6 + 7 * 8 + 9 * 0;
   
       // 输出金字塔
       cout << "   *" << endl;
       cout << "  ***" << endl;
       cout << " *****" << endl;
       cout << "*******" << endl;
   
       // 输出自己的名字
       cout << "Reacher";
   
       return 0; // 函数的返回值为 0
   }
   ```

   

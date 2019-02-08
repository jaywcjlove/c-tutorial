Beginning C
---

C 语言是一种功能强大、简洁的计算机语言，通过它可以编写程序，指挥计算机完成指定任务。

目录
===

- [创建第一个程序](#创建第一个程序)
- [编译源码](#编译源码)
- [添加注释](#添加注释)
- [使用变量](#使用变量)
- [使用多个变量](#使用多个变量)
- [简单的计算](#简单的计算)
- [计算吃饼干](#计算吃饼干)
- [有浮点值的除法](#有浮点值的除法)

## 创建第一个程序

```c
int main(void)
{
  printf("Hello world!");
  return 0;
}
```

将上面代码保存为 [`hello.c`](example/hello.c)

## 编译源码

```bash
$ gcc -o hello hello.c
$ ./hello
Hello World
```

## 添加注释

```c
/**
 * Written byu Kenny Wong
 * Copyright 2019
*/

#include <stdio.h>

// 每个程序总是从 main 这个函数开始执行
int main()
{
  printf("Hello world!"); // 这里是单行注释输出日志
  return 0;               // main 函数 返回了个 0，表示正常终止程序，非 0 表示异常
}
```

## [使用变量](example/using_a_variable.c)

```c
#include <stdio.h>

int main(void)
{
  int salary;     // 声明一个名为 salary 的变量
  salary = 10000; // 将 10000 存储在 salary 中
  printf("My salary is %d.\n", salary);
  return 0;
}
```

## [使用多个变量](example/using_more_variables.c)

```c
#include <stdio.h>

int main(void)
{
  int brothers; // 声明一个名为 brothers 的变量
  int brides;   // 和一个叫做 brides 的变量

  brothers = 7; // 将 7 存储在变量 brothers 中
  brides = 7;   // 将 7 存储在变量 brides 中

  // 输出变量内容
  printf("%d brides for %d brothers\n", brides, brothers);
  return 0;
}
```

## [简单的计算](example/simple_calculations.c)

```c
#include <stdio.h>

int main(void)
{
  int total_pets;
  int cats;
  int dogs;
  int ponies;
  int others;

  // 设置每种宠物的数量
  cats = 2;
  dogs = 1;
  ponies = 1;
  others = 46;

  // 计算宠物总数
  total_pets = cats + dogs + ponies + others;

  printf("我们共有 %d 只宠物!\n", total_pets); // 输出结果
  return 0;
}
```

## [计算吃饼干](example/calculations_with_cookies.c)

```c
#include <stdio.h>

int main(void)
{
  int cookies = 5;           // 饼干总数
  int cookie_calories = 125; // 每卡路里需要的饼干
  int total_eaten = 0;       // 吃饼干总数

  int eaten = 2;             // 要吃的数量
  cookies = cookies - eaten; // 减去吃掉饼干，获取剩下的饼干
  total_eaten = total_eaten + eaten;
  printf("\n我吃了 %d 个饼干。 剩下 %d 个饼干。", eaten, cookies);

  eaten = 3;                 // 吃掉饼干的新值，重新赋值
  cookies = cookies - eaten; // 减去吃掉饼干，获取剩下的饼干
  total_eaten = total_eaten + eaten;
  printf("\n我又吃了 %d 个。 现在剩下 %d 个饼干。\n", eaten, cookies);
  printf("\n消耗的总能量为 %d 卡路里。\n", total_eaten * cookie_calories);
  return 0;
}
```

## [有浮点值的除法](example/division_with_float_values.c)

```c
#include <stdio.h>

int main(void)
{
  float plank_length = 10.0f; // 长度
  float piece_count = 4.0f;   // 多少块
  float piece_length = 0.0f;  // 每块的长度

  piece_length = plank_length / piece_count;
  printf("一块 %f 英尺长的木板可以切成 %f 块 %f 英尺长。\n", plank_length, piece_count, piece_length);
  return 0;
}
```
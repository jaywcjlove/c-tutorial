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

## 创建第一个程序

```c
int main(void)
{
  printf("Hello world!");
  return 0;
}
```

将上面代码保存为 [`hello.c`](example/demo1/hello.c)

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

## 使用变量

[使用变量实例源码](example/demo2/using_a_variable.c)

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


## 使用多个变量

[使用多个变量实例源码](example/demo2/using_more_variables.c)

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

## [简单的计算](example/demo3/simple_calculations.c)

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
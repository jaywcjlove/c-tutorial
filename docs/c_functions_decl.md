C 函数声明和定义
===

您刚刚从前面的章节中了解到，您可以通过以下方式创建和调用函数：

## 示例 1

```c
// 创建函数
void myFunction() {
  printf("晚上好！");
}

int main() {
  myFunction(); // 调用函数
  return 0;
}
```

一个函数由两部分组成：

- **Declaration声明：** 函数的名称、返回类型和参数（如果有）
- **definition：** 函数体（要执行的代码）

```c
void myFunction() { // 声明 declaration
  // 函数体（要执行的代码）(definition)
}
```

对于代码优化，建议将函数的声明和定义分开。

你会经常看到 C 程序在 `main()` 上方有函数声明，在 `main()` 下方有函数定义。 这将使代码更好地组织和更容易阅读：

## 示例 2

```c
// 函数声明
void myFunction();

// 主要方法
int main() {
  myFunction();  // 调用函数
  return 0;
}

// 函数定义
void myFunction() {
  printf("晚上好！");
}
```

## 另一个例子

如果我们使用上一章中关于函数参数和返回值的示例：

```c
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int result = myFunction(5, 3);
  printf("Result is = %d", result);

  return 0;
}
// 输出 8 (5 + 3)
```

像这样编写它被认为是一种好习惯：

```c
// 函数声明
int myFunction(int, int);

// 主要方法
int main() {
  int result = myFunction(5, 3); // 调用函数
  printf("Result is = %d", result);

  return 0;
}

// 函数定义
int myFunction(int x, int y) {
  return x + y;
}
```
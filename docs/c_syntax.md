C 语法
===

C 语言规定了源代码中每个词汇、语句的含义，也规定了它们该如何组织在一起，这就是语法（Syntax）。您已经在 `开始` 章节中看到以下代码。 让我们分解它以更好地理解它：

```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```

**示例说明**

第 1 行：`#include <stdio.h>` 是一个头文件库，可让我们使用输入和输出函数，例如 `printf()`（在第 4 行中使用）。头文件向 `C++` 程序添加功能。

第 2 行：空行。 `C` 忽略空格。 但是我们使用它来使代码更具可读性。

第 3 行：另一个总是出现在 `C` 程序中的东西是 `main()`。 这称为函数。 其大括号 `{}` 内的任何代码都将被执行。

第 4 行：`printf()` 是用于将文本输出/打印到屏幕的函数。 在示例中，它将输出 `Hello World`。

第 5 行：`return 0` 结束 `main()` 函数。

第 6 行：不要忘记添加右大括号 `}` 以实际结束 `main` 函数。
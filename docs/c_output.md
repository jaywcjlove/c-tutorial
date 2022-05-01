C 输出（打印文本）
===

`printf()` 函数用于输出值/打印文本：

```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```

您可以根据需要添加任意数量的 `printf()` 函数。 但是，请注意，它不会在输出末尾插入新行：

```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("I am learning C.");
  return 0;
}
```

## `%d` 输出整数

```c
#include <stdio.h>

int main()
{
  int testInteger = 5;
  printf("Number = %d", testInteger);
  return 0;
}
```

输出 `Number = 5`

## `%f` 输出浮点型数据

```c
#include <stdio.h>
int main()
{
  float f;
  printf("Enter a number: ");
  // %f 匹配浮点型数据
  scanf("%f", &f);
  printf("Value = %f", f);
  return 0;
}
```
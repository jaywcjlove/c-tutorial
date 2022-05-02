C 跳出循环 Break/Continue
===

## Break

您已经看过本教程前面章节中使用的 `break` 语句。 它用于“跳出” [`switch`](./c_switch.md) 语句。

`break` 语句也可用于跳出**循环**。

这个例子在 `i` 等于 4 时跳出循环：


```c
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}
```

## Continue

如果指定条件发生，`continue` 语句会中断一次迭代（在循环中），并继续循环中的下一次迭代。

此示例跳过 4 的值：

```c
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}
```

## 在 While 循环中中断并继续

您还可以在 `while` 循环中使用 `break` 和 `continue`：

### Break 示例

```c
int i = 0;

while (i < 10) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
  i++;
}
```

### Continue 示例

```c
int i = 0;

while (i < 10) {
  i++;
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}
```


## break 示例

```c
#include <stdio.h>
int main(){
  int i=1, sum=0;
  while(1){ // 循环条件为死循环
    sum+=i;
    i++;
    if(i>100) break;
  }
  printf("%d\n", sum);
  return 0;
}
// 运行结果：5050
```

`while` 循环条件为 `1`，是一个死循环。当执行到第 `100` 次循环的时候，计算完 `i++;` 后 `i` 的值为 `101`，此时 `if` 语句的条件 `i> 100` 成立，执行 `break;` 语句，结束循环

```c
#include <stdio.h>
int main(){
  int i=1, j;
  while(1){    // 外层循环
    j=1;
    while(1){  // 内层循环
      printf("%-4d", i*j);
      j++;
      if(j>4) break;  // 跳出内层循环
    }
    printf("\n");
    i++;
    if(i>4) break;    // 跳出外层循环
  }
  return 0;
}
// 运行结果：
// 1   2   3   4
// 2   4   6   8
// 3   6   9   12
// 4   8   12  16
```

当 `j>4` 成立时，执行 `break;`，跳出内层循环；外层循环依然执行，直到 `i>4` 成立，跳出外层循环。内层循环共执行了 `4` 次，外层循环共执行了 `1` 次。

## continue 示例

语句的作用是跳过循环体中剩余的语句而强制进入下一次循环。`continue` 语句只用在 `while`、[`for`](c_for_loop.md) 循环中，常与 [`if`](./c_conditions.md) 条件语句一起使用，判断条件是否成立。

```c
#include <stdio.h>
int main(){
  char c = 0;
  while(c!='\n'){  // 回车键结束循环
    c=getchar();
    if(c=='4' || c=='5'){  // 按下的是数字键 4 或 5
      continue;    // 跳过当次循环，进入下次循环
    }
    putchar(c);
  }
  return 0;
}
// 运行结果：
// 0123456789↙
// 01236789
```

程序遇到 `while` 时，变量 `c` 的值为 `'\0'`，循环条件 `c!='\n'` 成立，开始第一次循环。`getchar()` 使程序暂停执行，等待用户输入，直到用户按下回车键才开始读取字符。

本例我们输入的是 `0123456789`，当读取到 `4` 或 `5` 时，`if` 的条件 `c=='4'||c=='5'`成立，就执行 `continue` 语句，结束当前循环，直接进入下一次循环，也就是说 `putchar(c);` 不会被执行到。而读取到其他数字时，`if` 的条件不成立，`continue` 语句不会被执行到，`putchar(c);` 就会输出读取到的字符。

`break` 与 `continue` 的对比：`break` 用来结束所有循环，循环语句不再有执行的机会；`continue` 用来结束本次循环，直接跳到下一次循环，如果循环条件成立，还会继续循环。

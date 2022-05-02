C 输出（打印文本）
===

`printf()` 函数用于输出值/打印文本

## 格式控制符

格式控制符 | 说明
---- | ----
`%c` | 输出一个单一的字符
`%hd` `%d` `%ld` | 以十进制、有符号的形式输出 short、int、long 类型的整数
`%hu` `%u` `%lu` | 以十进制、无符号的形式输出 short、int、long 类型的整数
`%ho` `%o` `%lo` | 以八进制、不带前缀、无符号的形式输出 short、int、long 类型的整数
`%#ho` `%#o` `%#lo` | 以八进制、带前缀、无符号的形式输出 short、int、long 类型的整数
`%hx` `%x` `%lx`<br> `%hX` `%X` `%lX` | 以十六进制、不带前缀、无符号的形式输出 short、int、long 类型的整数。如果 x 小写，那么输出的十六进制数字也小写；如果 X 大写，那么输出的十六进制数字也大写。
`%#hx` `%#x` `%#lx`<br>`%#hX` `%#X` `%#lX` | 以十六进制、带前缀、无符号的形式输出 short、int、long 类型的整数。如果 x 小写，那么输出的十六进制数字和前缀都小写；如果 X 大写，那么输出的十六进制数字和前缀都大写。
`%f` `%lf` | 以十进制的形式输出 float` `、double 类型的小数
`%e` `%le` `%E` `%lE` | 以指数的形式输出 float、double 类型的小数。如果 e 小写，那么输出结果中的 e 也小写；如果 E 大写，那么输出结果中的 E 也大写。
`%g` `%lg` `%G` `%lG` | 以十进制和指数中较短的形式输出 float、double 类型的小数，并且小数部分的最后不会添加多余的 0。如果 g 小写，那么当以指数形式输出时 e 也小写；如果 G 大写，那么当以指数形式输出时 E 也大写。
`%s` | 输出一个字符串

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

### `%d` 输出整数

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

### `%f` 输出浮点型数据

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

## short/int/long

|  | short | int | long |
| ---- | ---- | ---- | ---- |
| 8 进制 | `%ho` | `%o` | `%lo` |
| 10 进制 | `%hd` | `%d` | `%ld` |
| 16 进制 | `%hx` 或者 `%hX` | `%x` 或者 `%X` | `%lx` 或者 `%lX` |

```c
short a = 0b1010110;  // 2 进制数字
int b = 02713;        // 8 进制数字
long c = 0X1DAB83;    // 16 进制数字

printf("a=%ho, b=%o, c=%lo\n", a, b, c);  // 以 8 进制形似输出
// a=126, b=2713, c=7325603
printf("a=%hd, b=%d, c=%ld\n", a, b, c);  // 以 10 进制形式输出
// a=86, b=1483, c=1944451
printf("a=%hx, b=%x, c=%lx\n", a, b, c);  // 以 16 进制形式输出（字母小写）
// a=56, b=5cb, c=1dab83
printf("a=%hX, b=%X, c=%lX\n", a, b, c);  // 以 16 进制形式输出（字母大写）
// a=56, b=5CB, c=1DAB83
```

## 控制空格数

```c
#include <stdio.h>
int main()
{
  int a1=20, a2=345, a3=700, a4=22;
  int b1=56720, b2=9999, b3=20098, b4=2;
  int c1=233, c2=205, c3=1, c4=6666;
  int d1=34, d2=0, d3=23, d4=23006783;
  printf("%-9d %-9d %-9d %-9d\n", a1, a2, a3, a4);
  printf("%-9d %-9d %-9d %-9d\n", b1, b2, b3, b4);
  printf("%-9d %-9d %-9d %-9d\n", c1, c2, c3, c4);
  printf("%-9d %-9d %-9d %-9d\n", d1, d2, d3, d4);
  return 0;
}
```

输出结果：

```bash
20        345       700       22
56720     9999      20098     2
233       205       1         6666
34        0         23        23006783
```

`%-9d` 中，`d` 表示以 10 进制输出，`9` 表示最少占 `9` 个字符的宽度，宽度不足以空格补齐，`-` 表示左对齐。综合起来，`%-9d` 表示以 10 进制输出，左对齐，宽度最小为 `9` 个字符。大家可以亲自试试 `%9d` 的输出效果。

## 标志字符

- `-` 表示左对齐。如果没有，就按照默认的对齐方式，默认一般为右对齐。
- `+`  用于整数或者小数，表示输出符号（正负号）。如果没有，那么只有负数才会输出符号。
- `空格` 用于整数或者小数，输出值为正时冠以空格，为负时冠以负号。
- `#` 对于八进制（`%o`）和十六进制（`%x` / `%X`）整数，`#` 表示在输出时添加前缀；八进制的前缀是 `0`，十六进制的前缀是 `0x` / `0X`。对于小数（`%f` / `%e` / `%g`），`#` 表示强迫输出小数点。如果没有小数部分，默认是不输出小数点的，加上 `#` 以后，即使没有小数部分也会带上小数点。

```c
#include <stdio.h>
int main(){
  int m = 192, n = -943;
  float f = 84.342;
  printf("m=%10d, m=%-10d\n", m, m);  // 演示 - 的用法
  printf("m=%+d, n=%+d\n", m, n);     // 演示 + 的用法
  printf("m=% d, n=% d\n", m, n);     // 演示空格的用法
  printf("f=%.0f, f=%#.0f\n", f, f);  // 演示 # 的用法
  return 0;
}
```

运行结果：

```bash
m=       192, m=192 # 当以%10d输出 m 时，是右对齐，
                    # 所以在 192 前面补七个空格；
                    # 当以%-10d输出 m 时，是左对齐，所以在 192 后面补七个空格。

m=+192, n=-943      # m 是正数，以 %+d 输出时要带上正号；n 是负数，以%+d输出时要带上负号。

m= 192, n=-943      # m 是正数，以 % d 输出时要在前面加空格；n 是负数，以% d输出时要在前面加负号。

f=84, f=84.         # %.0f表示保留 0 位小数，也就是只输出整数部分，不输出小数部分。
                    # 默认情况下，这种输出形式是不带小数点的，但是如果有了#标志，
                    # 那么就要在整数的后面“硬加上”一个小数点，以和纯整数区分开。
```

## 格式控制符

```
%[flag][width][.precision]type
```

- `[ ]` 表示此处的内容可有可无，是可以省略的。
- `type` (必须有)表示输出类型，比如 `%d`、`%f`、`%c`、`%lf`，`type` 就分别对应 `d`、`f`、`c`、`lf`；再如，`%-9d` 中 `type` 对应 `d`。
- `width` 表示最小输出宽度，也就是至少占用几个字符的位置；例如，`%-9d` 中 `width` 对应 `9`，表示输出结果最少占用 `9` 个字符的宽度。

```c
#include <stdio.h>
int main(){
  int n = 234;
  float f = 9.8;
  char c = '@';
  char *str = "https://github.com/jaywcjlove/c-tutorial";
  printf("%10d%12f%4c%8s", n, f, c, str);
  return 0;
}
```

运行结果：

```
       234    9.800000   @https://github.com/jaywcjlove/c-tutorial
```

对输出结果的说明：

- `n` 的指定输出宽度为 10，234 的宽度为 3，所以前边要补上 7 个空格。
- `f` 的指定输出宽度为 12，9.800000 的宽度为 8，所以前边要补上 4 个空格。
- `str` 的指定输出宽度为 8，"https://github.com/jaywcjlove/c-tutorial" 的宽度为 `40`，超过了 8，所以指定输出宽度不再起作用，而是按照 `str` 的实际宽度输出。

## 输出精度/宽度

```c
#include <stdio.h>
int main(){
  int n = 123456;
  double f = 882.923672;
  char *str = "abcdefghi";
  printf("n: %.9d  %.4d\n", n, n);
  printf("f: %.2lf  %.4lf  %.10lf\n", f, f, f);
  printf("str: %.5s  %.15s\n", str, str);
  return 0;
}
```

运行结果：

```
n: 000123456  123456
f: 882.92  882.9237  882.9236720000
str: abcde  abcdefghi
```
对输出结果的说明：

- 对于 `n`，`.precision` 表示最小输出宽度。n 本身的宽度为 6，当 `precision` 为 9 时，大于 6，要在 n 的前面补 3 个 0；当 `precision` 为 4 时，小于 6，不再起作用。
- 对于 `f`，`.precision` 表示输出精度。f 的小数部分有 6 位数字，当 `precision` 为 2 或者 4 时，都小于 6，要按照四舍五入的原则截断小数；当 precision 为 10 时，大于 6，要在小数的后面补四个 0。
- 对于 `str`，`.precision` 表示最大输出宽度。`str` 本身的宽度为 9，当 `precision` 为 5 时，小于 9，要截取 str 的前 5 个字符；当 precision 为 15 时，大于 9，不再起作用。
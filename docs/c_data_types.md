C 数据类型 Data Types
===


## 数据类型

如[变量章节](c_variables.md)中所述，C 中的变量必须是指定的**数据类型**，并且必须在 [`printf()`](./c_output.md) 函数中使用**格式说明符**才能显示 它：

```c
// 创建变量
int myNum = 5;             // 整数
float myFloatNum = 5.99;   // 浮点数
char myLetter = 'D';       // 字符串

// 打印输出变量
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
```

## 基本数据类型

数据类型指定变量将存储的信息的大小和类型。

让我们看看基本的数据类型。它的大小是根据 32 位体系结构给出的：

| 数据类型 | 大小 Size | 范围 Range | 描述 Description |
| ----- | ----- | ----- | ----- |
| `char`   | 1 字节 | `−128` ~ `127` | 单个字符/字母/数字/ASCII |
| signed char | 1 字节 | `−128` ~ `127` | - |
| unsigned char | 1 字节 | `0` ~ `255` | - |
| `int`    | `2` 到 `4` 字节  |  `−32,768` ~ `32,767` | 存储整数 |
| signed int | 2 字节 | `−32,768` ~ `32,767` | |
| unsigned int | 2 字节 | `0` ~ `65,535` | |
| short int | 2 字节 | `−32,768` ~ `32,767` |  |
| signed short int | 2 字节 | `−32,768` ~ `32,767` |  |
| unsigned short int | 2 字节 | `0` ~ `65,535` |  |
| long int | 4 字节 | `-2,147,483,648` ~ `2,147,483,647` | |
| signed long int | 4 字节 | `-2,147,483,648` ~ `2,147,483,647` | |
| unsigned long int | 4 字节 | `0` ~ `4,294,967,295` | |
| `float`  | 4 字节      |  | |
| `double` | 8 字节      |  | |
| long double | 10 字节 |  | |

说  明 | 字符型 | 短整型 | 整型 | 长整型 | 单精度浮点型 | 双精度浮点型 | 无类型
---- | ---- | ---- | ---- | ---- | ---- | ---- | ----
数据类型 | char | short | int | long | float | double | void

## 基本格式说明符

每种数据类型都有不同的格式说明符。 这里是其中的一些：

| 格式说明符 | 数据类型 |
| ----- | ----- |
| `%d` 或 `%i` | `int` 整数 |
| `%f`         | `float` 单精度的十进制类型 |
| `%lf`        | `double` 高精度浮点数据或数字 |
| `%c`         | `char` 字符 |
| `%s`         | 用于 **[strings](c_strings.md)**，您可以在 [`strings`](c_strings.md) 中了解更多信息 |


|  | short | int | long |
| ---- | ---- | ---- | ---- |
| 8 进制 | `%ho` | `%o` | `%lo` |
| 10 进制 | `%hd` | `%d` | `%ld` |
| 16 进制 | `%hx` 或者 `%hX` | `%x` 或者 `%X` | `%lx` 或者 `%lX` |

### int 整数

```c
// 创建 整数 变量
int myNum = 5;
// 打印输出变量
printf("%d\n", myNum);
```

### float 单精度的十进制类型

```c
float myFloatNum = 5.99; // 浮点数
// 打印输出变量
printf("%f\n", myFloatNum);
```

### char 字符

```c
char myLetter = 'D'; // 字符串
// 打印输出变量
printf("%c\n", myLetter);
```

### double 高精度浮点数据或数字

范围是 `1.7E-308` 到 `1.7E+308`。双精度数据可以用实数 (`1` 到 `10`)、小数 (`0.1` 到 `11.002`) 和负数 (-1 到 -0.00002) 表示。它可以容纳大约 15 到 16 位小数点前后的数字。

```c
double myDouble = 3.2325467;  
// 打印输出变量
printf("%lf\n", myDouble);
```

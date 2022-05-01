C 变量
===

变量是存储数据值的容器。

在 C 中，有不同类型的变量（用不同的关键字定义），例如：

- `int` - 存储整数（整数），不带小数，例如 123 或 -123
- `float` - 存储浮点数，带小数，例如 19.99 或 -19.99
- `char` - 存储单个字符，例如“a”或“B”。 字符值用单引号括起来

## 声明（创建）变量

要创建变量，请指定类型并为其赋值：

### 语法 Syntax

```c
type variableName = value;
```

其中 `type` 是 C 类型之一（例如 `int`），`variableName` 是变量的名称（例如 x 或 myName）。 等号用于为变量`赋值`。

因此，要创建一个应该存储数字的变量，请查看以下示例：

### 示例 1

创建一个名为 `myNum` 的 `int` 类型变量并将值 `15` 分配给它：

```c
int myNum = 15;
```

### 示例 2

你也可以声明一个变量而不赋值，然后再赋值：

```c
int myNum;
myNum = 15;
```

### 示例 3

注意：如果您为现有变量分配新值，它将覆盖以前的值：

```c
int myNum = 15;  // myNum 值为 15
myNum = 10;  // 现在 myNum 值为 10
```

## 输出变量

您从 [输出章节](./c_output.md) 中了解到，您可以使用 `printf()` 函数输出值/打印文本：

```c
printf("Hello World!");
```

在许多其他编程语言（如 Python、Java 和 C++）中，您通常会使用 **print函数** 显示变量的值。 但是，这在 C 中是不能使用的：

```c
int myNum = 15;
printf(myNum);  // 没发生什么事
```
<!--rehype:style= background: #ff000036;-->

要在 C 中输出变量，您必须熟悉所谓的“格式说明符”。

## 格式说明符

格式说明符与 `printf()` 函数一起使用，以告诉编译器变量存储什么类型的数据。 它基本上是变量值的占位符。

格式说明符以百分号 `%` 开头，后跟一个字符。

例如，要输出 `int` 变量的值，您必须在 `printf()` 函数中使用用双引号括起来的格式说明符 `%d` 或 `%i`：

```c
int myNum = 15;
printf("%d", myNum);  // 输出 15
```

要打印其他类型，请使用 `%c` 表示 `char` 和 `%f` 表示 `float`：

```c
// 创建变量
int myNum = 5;             // 整数 Integer (whole number)
float myFloatNum = 5.99;   // 浮点数 Floating point number
char myLetter = 'D';       // 字符串 Character

// 打印变量
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
```

要组合文本和变量，请在 `printf()` 函数中用逗号分隔它们：

```c
int myNum = 6;
printf("我最喜欢的号码是: %d", myNum);
```

要在单个 `printf()` 函数中打印不同的类型，可以使用以下命令：

```c
int myNum = 5;
char myLetter = 'D';
printf("My number is %d and my letter is %c", myNum, myLetter);
```

您将了解有关 [下一章中的数据类型](./c_data_types.md) 的更多信息。

## 添加变量相加

要将变量添加到另一个变量，可以使用 `+` 运算符：

```c
int x = 5;
int y = 6;
int sum = x + y;
printf("%d", sum);
```

## 声明多个变量

要声明多个相同类型的变量，请使用**逗号分隔**列表：

```c
int x = 5, y = 6, z = 50;
printf("%d", x + y + z);
```

您还可以将**相同的值**分配给相同类型的多个变量：

```c
int x, y, z;
x = y = z = 50;
printf("%d", x + y + z);
```

## C 变量名称

所有 C **变量**必须用**唯一名称** **标识**。

这些唯一名称称为**标识符**。

标识符可以是短名称（如 x 和 y）或更具描述性的名称（age、sum、totalVolume）。

**注意：** 建议使用描述性名称以创建可理解和可维护的代码：

```c
// 👍 Good 
int minutesPerHour = 60;
// 👎 正确的，但并不那么容易理解 `m` 实际上是什么
int m = 60;
```

命名变量的 **一般规则** 是：

* 名称可以包含字母、数字和下划线
* 名称必须以字母或下划线 (\_) 开头
* 名称区分大小写（`myVar` 和 `myvar` 是不同的变量）
* 名称不能包含空格或特殊字符，如 `!`、`#`、`%` 等。
* 保留字（如`int`）不能用作名称


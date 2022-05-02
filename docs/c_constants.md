C 常量 Constants
===

## 常量

当您不希望其他人（或您自己）覆盖现有变量值时，请使用 `const` 关键字（这会将变量声明为`常量`，这意味着**不可更改且只读**）：

```c
const int myNum = 15;  // myNum 将始终为 15
myNum = 10;            // error: assignment of read-only variable 'myNum'
```
<!--rehype:style= background: #ff000036;-->

当您具有不太可能更改的值时，您应该始终将变量声明为常量：

```c
const int minutesPerHour = 60;
const float PI = 3.14;
```

## 常量笔记

当你声明一个常量变量时，它必须被赋值：

像这样：

```c
const int minutesPerHour = 60;
```

然而，下面示例将不起作用报错：

```c
const int minutesPerHour;
minutesPerHour = 60; // error
```
<!--rehype:style= background: #ff000036;-->

## 最佳实践

关于常量变量的另一件事是，用 `大写` 声明它们被认为是一种好习惯。 它不是必需的，但对代码可读性很有用，并且对于 C 程序员来说很常见：

```c
const int BIRTHYEAR = 1980;
```
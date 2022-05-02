C Structures (structs)
===

结构（也称为结构）是一种将多个相关变量组合到一个位置的方法。 结构中的每个变量都称为结构的**成员**。

与 [array](c_arrays.md) 不同，结构可以包含许多不同的数据类型（int、float、char 等）。

## 创建结构

您可以使用 `struct` 关键字创建结构，并在花括号内声明其每个成员：

```c
struct MyStructure {   // 结构声明
  int myNum;           // 成员（int 变量）
  char myLetter;       // 成员（char 变量）
}; // 用分号结束结构
```

要访问该结构，您必须为其创建一个变量。

在 `main()` 方法中使用 `struct` 关键字，后跟结构的名称，然后是结构变量的名称：

创建一个名为 `s1` 的结构变量：

```c
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  struct myStructure s1;
  return 0;
}
```

## 访问结构成员

要访问结构的成员，请使用点语法 (`.`)：

```c
// 创建一个名为 myStructure 的结构
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // 创建一个名为 **s1** 的 myStructure 结构变量
  struct myStructure s1;

  // 为 s1 的成员赋值
  s1.myNum = 13;
  s1.myLetter = 'B';

  // 打印值
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}
```

现在，您只需使用一个结构即可轻松创建具有不同值的多个结构变量：


```c
// 创建不同的结构变量
struct myStructure s1;
struct myStructure s2;

// 为不同的结构变量赋值
s1.myNum = 13;
s1.myLetter = 'B';

s2.myNum = 20;
s2.myLetter = 'C';
```

## 结构中的字符串呢？

请记住，C 中的字符串实际上是一个字符数组，不幸的是，您不能像这样为数组赋值：

```c
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // 试图为字符串赋值
  s1.myString = "Some text";

  // 尝试打印值
  printf("My string: %s", s1.myString);

  return 0;
}
```
<!--rehype:style= background: #ff000036;-->

会出现错误：

```bash
prog.c:12:15: error: assignment to expression with array type
```
<!--rehype:style= background: #ff000036;-->

但是，有一个解决方案！ 您可以使用 `strcpy()` 函数并将值分配给 `s1.myString`，如下所示：

```c
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // 使用 strcpy 函数为字符串赋值
  strcpy(s1.myString, "Some text");

  // 打印值
  printf("My string: %s", s1.myString);

  return 0;
}
```

结果：

`My string: Some text`

## 更简单的语法

您还可以在声明时在一行中为结构变量的成员赋值。

只需将值插入花括号 `{}` 内的逗号分隔列表中。 请注意，您不必通过这种技术对字符串值使用 `strcpy()` 函数：

```c
// 创建结构
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // 创建一个结构变量并为其赋值
  struct myStructure s1 = {13, 'B', "Some text"};

  // 打印值
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
```

**注意：** 插入值的顺序必须与结构中声明的变量类型的顺序相匹配（13 表示 int，'B' 表示 char 等）。

## 复制结构

您还可以将一种结构分配给另一种结构。

在以下示例中，将 s1 的值复制到 s2：

```c
struct myStructure s1 = {13, 'B', "Some text"};
struct myStructure s2;
s2 = s1;
```


## 修改值

如果要更改/修改值，可以使用点语法 (`.`)。

要修改字符串值，`strcpy()` 函数再次很有用：

```c
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // 创建一个结构变量并为其赋值
  struct myStructure s1 = {13, 'B', "Some text"};

  // 修改值
  s1.myNum = 30;
  s1.myLetter = 'C';
  strcpy(s1.myString, "Something else");

  // 打印值
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
```

当您复制结构值时，修改值特别有用：

```c
// 创建一个结构变量并为其赋值
struct myStructure s1 = {13, 'B', "Some text"};

// 创建另一个结构变量
struct myStructure s2;

// 将 s1 值复制到 s2
s2 = s1;

// 更改 s2 值
s2.myNum = 30;
s2.myLetter = 'C';
strcpy(s2.myString, "Something else");

// 打印值
printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
```

**好的，那么，结构如何有用？**

想象一下，您必须编写一个程序来存储有关汽车的不同信息，例如品牌、型号和年份。 结构的优点在于您可以创建一个“汽车模板”并将其用于您制造的每辆汽车。 请参阅下面的真实示例。

## 现实生活中的例子

使用一个结构来存储关于 Cars 的不同信息：

```c
struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}
```
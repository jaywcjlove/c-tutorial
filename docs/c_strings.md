C 字符串 Strings
===

字符串用于存储文本/字符。

例如，“Hello World”是一个字符串。

与许多其他编程语言不同，C 没有 **String 类型** 来轻松创建字符串变量。但是，您可以使用 `char` 类型并创建一个字符 [array](c_arrays.md) 以在 C 中创建一个字符串：

```c
char greetings[] = "Hello World!";
```

请注意，您必须使用双引号。

要输出字符串，您可以使用 [`printf()`](./c_output.md) 函数和格式说明符 `%s` 来告诉 C 我们现在正在处理字符串：

```c
char greetings[] = "Hello World!";
printf("%s", greetings);
```

## 访问字符串

由于字符串实际上是 C 中的数组，因此您可以通过在方括号 `[]` 中引用其索引号来访问字符串。

此示例打印 **greetings** 中的**第一个字符 (0)**：

```c
char greetings[] = "Hello World!";
printf("%c", greetings[0]);
```

请注意，我们必须使用 `%c` 格式说明符来打印**单个字符**。

## 修改字符串

要更改字符串中特定字符的值，请参考索引号，并使用**单引号**：

```c
char greetings[] = "Hello World!";
greetings[0] = 'J';
printf("%s", greetings);
// 输出 "Jello World!" 而不是 "Hello World!"
```

## 另一种创建字符串的方法

在上面的示例中，我们使用 “字符串文字(string literal)” 来创建字符串变量。 这是在 C 中创建字符串的最简单方法。

您还应该注意，您可以使用一组字符创建一个字符串。 此示例将产生与上述示例相同的结果：

```c
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greetings);
```

**为什么我们在末尾包含 `\0` 字符？** 这被称为 “空终止字符(null termininating character)”，在使用此方法创建字符串时必须包含。 它告诉 C 这是字符串的结尾。

## 差异

两种创建字符串的方法之间的区别在于，第一种方法更容易编写，并且您不必包含 `\0` 字符，因为 C 会为您完成。

您应该注意，两个数组的大小是相同的：它们都有 **13 个字符**（顺便说一下，空格也算作一个字符），包括 `\0` 字符：

```c
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char greetings2[] = "Hello World!";

printf("%lu\n", sizeof(greetings));   // 输出 13
printf("%lu\n", sizeof(greetings2));  // 输出 13
```
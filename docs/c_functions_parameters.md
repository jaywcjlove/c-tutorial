C 函数参数
===

## 参数

信息可以作为参数(Parameters/Arguments)传递给函数。 参数在函数内部充当变量。

参数在函数名之后的括号内指定。您可以添加任意数量的参数，只需用逗号分隔它们：

```c
returnType functionName(parameter1, parameter2, parameter3) {
  // 要执行的代码
}
```

以下函数采用带有 **name** 作为参数的 [string of characters](c_strings.md)。当函数被调用时，我们传递一个名字，这个名字在函数内部用来打印“Hello”和每个人的名字。

```c
void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Kenny");
  return 0;
}

// Hello Liam
// Hello Jenny
// Hello Kenny
```

当一个 **parameter** 被传递给函数时，它被称为一个 **argument**。 因此，从上面的示例中：`name` 是一个**parameter**，而`Liam`、`Jenny` 和`Anja` 是**arguments**。

## 多个参数

在函数内部，您可以添加任意数量的参数(parameters)：

### Example

```c
void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

// Hello Liam. You are 3 years old.
// Hello Jenny. You are 14 years old.
// Hello Anja. You are 30 years old.
```

请注意，当您使用多个参数(**parameters**)时，函数调用必须具有与参数(**arguments**)相同数量的参数(**parameters**)，并且参数(**arguments**)必须以相同的顺序传递。

## 返回值

前面示例中使用的 `void` 关键字表示函数不应返回值。 如果希望函数返回值，可以使用数据类型（如`int`或`float`等）代替`void`，并在函数内部使用`return`关键字：

```c
int myFunction(int x) {
  return 5 + x;
}

int main() {
  printf("Result is: %d", myFunction(3));

  return 0;
}

// 输出 8    (5 + 3)
```

此示例返回具有**两个参数(parameters)**的函数的总和：

```c
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("Result is: %d", myFunction(5, 3));
  return 0;
}

// Outputs 8     (5 + 3)
```

您还可以将结果存储在变量中：

```c
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int result = myFunction(5, 3);
  printf("Result is = %d", result);

  return 0;
}
// Outputs 8 (5 + 3)
```
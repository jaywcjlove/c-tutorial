C 数组 Arrays
===

数组用于在单个变量中存储多个值，而不是为每个值声明单独的变量。

要创建一个数组，请定义数据类型（如`int`）并指定数组的名称，后跟**方括号`[]`**。

要向其中插入值，请在花括号 `{}` 内使用逗号 `,` 分隔的列表：

```c
int myNumbers[] = {25, 50, 75, 100};
```

我们现在创建了一个包含四个整数的数组的变量。

## 访问数组的元素

要访问数组元素，请参考其**索引号**。

数组索引以 **0** 开头：`[0]` 是第一个元素。`[1]` 是第二个元素，依此类推。

此语句访问 `myNumbers` 中的**第一个元素 [0]** 的值：

```c
int myNumbers[] = {25, 50, 75, 100};
printf("%d", myNumbers[0]);

// 输出 25
```

## 更改数组元素

要更改特定元素的值，请参阅索引号：

```c
myNumbers[0] = 33;
```

```c
int myNumbers[] = {25, 50, 75, 100};
myNumbers[0] = 33;

printf("%d", myNumbers[0]);

// 现在输出 33 而不是 25
```

## 循环遍历数组

您可以使用 [`for`](./c_for_loop.md) 循环遍历数组元素。

以下示例输出 `myNumbers` 数组中的所有元素：

```c
int myNumbers[] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}
```

## 设置数组大小

另一种创建数组的常用方法是指定数组的大小，然后再添加元素：

```c
// 声明一个由四个整数组成的数组：
int myNumbers[4];

// 添加元素
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;
```

使用这种方法，**你必须知道数组的大小，**才能让程序存储足够的内存。

您无法在创建后更改数组的大小。
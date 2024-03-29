C 递归
===

递归是使函数调用本身的技术。 这种技术提供了一种将复杂问题分解为更容易解决的简单问题的方法。

递归可能有点难以理解。 弄清楚它是如何工作的最好方法是尝试它。

## 递归示例

将两个数字相加很容易，但将一系列数字相加则比较复杂。 在以下示例中，递归用于将一系列数字相加，方法是将其分解为两个数字相加的简单任务：

```c
int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
```

## 示例解释

当调用 `sum()` 函数时，它会将参数 `k` 添加到所有小于 `k` 的数字的总和中并返回结果。 当 k 变为 0 时，函数只返回 0。运行时，程序按以下步骤操作：

```c
10 + sum(9)
10 + ( 9 + sum(8) )
10 + ( 9 + ( 8 + sum(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
```

由于当 `k` 为 `0` 时函数不会调用自身，所以程序会停在那里并返回结果。

开发人员应该非常小心递归，因为很容易陷入编写一个永不终止的函数，或者一个使用过多内存或处理器能力的函数。 但是，如果编写正确，递归可能是一种非常有效且数学上优雅的编程方法。

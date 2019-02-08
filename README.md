Beginning C
---

C 语言是一种功能强大、简洁的计算机语言，通过它可以编写程序，指挥计算机完成指定任务。

## 创建第一个程序

```c
int main(void)
{
  printf("Hello world!");
  return 0;
}
```

将上面代码保存为 [`hello.c`](example/demo1/hello.c)

## 编译源码

```bash
$ gcc -o hello hello.c
$ ./hello
Hello World
```
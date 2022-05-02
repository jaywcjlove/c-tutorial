C 枚举 Enum
===

C 中的枚举也称为枚举类型。 它是一种用户定义的数据类型，由整数值组成，并为这些值提供有意义的名称。 在 C 中使用 `enum` 使程序易于理解和维护。 枚举是使用 enum 关键字定义的。

以下是在 C 中定义枚举的方式：

```c
enum flag { integer_const1, integer_const2, .....integter_constN };
```

`enum` 是一个新的关键字，专门用来定义枚举类型，这也是它在 C 语言中的唯一用途；`flag` 是枚举类型的名字；integer_const1, integer_const2, integer_const3, ...... 是每个值对应的名字的列表。注意最后的 `;` 不能少。


## 创建枚举类型

列出一个星期有几天

```c
enum week { Mon, Tues, Wed, Thurs, Fri, Sat, Sun };
```

可以看到，我们仅仅给出了名字，却没有给出名字对应的值，这是因为枚举值默认从 `0` 开始，往后逐个加 `1`（递增）；也就是说，`week` 中的 Mon、Tues ...... Sun 对应的值分别为 0、1 ... 6。

我们也可以给每个名字都指定一个值：

```c
enum week{ Mon = 1, Tues = 2, Wed = 3, Thurs = 4, Fri = 5, Sat = 6, Sun = 7 };
```

上面示例可以简化一下，只给第一个名字指定值，这样枚举值就从 1 开始递增，跟上面的写法是等效的：

```c
enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };
```

## 定义枚举变量

```c
enum week a, b, c;
```

定义枚举类型的同时定义变量

```c
enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun } a, b, c;
```

有了枚举变量，就可以把列表中的值赋给它

```c
enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };
enum week a = Mon, b = Wed, c = Sat;

// 或者

enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun } a = Mon, b = Wed, c = Sat;
```

## 示例

下面是一个简单的枚举示例应用，判断用户输入的是星期几：

```c
#include <stdio.h>
int main(){
  enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun } day;
  scanf("%d", &day);
  switch(day){
    case Mon:   puts("Monday"); break;
    case Tues:  puts("Tuesday"); break;
    case Wed:   puts("Wednesday"); break;
    case Thurs: puts("Thursday"); break;
    case Fri:   puts("Friday"); break;
    case Sat:   puts("Saturday"); break;
    case Sun:   puts("Sunday"); break;
    default:    puts("Error!");
  }
  return 0;
}
```

1. 枚举列表中的 Mon、Tues、Wed 这些标识符的作用范围是全局的（严格来说是 main() 函数内部），不能再定义与它们名字相同的变量。
2. Mon、Tues、Wed 等都是常量，不能对它们赋值，只能将它们的值赋给其他的变量。
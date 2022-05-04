C 关键字
===

C 语言一共有32个关键字，如下表所示：

关键字 | 说明  | 关键字 | 说明
---- | ---- | ---- | ----
auto | 声明自动变量  | static | 声明静态变量 
short | 声明短整型变量或函数  | volatile | 说明变量在程序执行中可被隐含地改变 
[int](./c_variables.md) | 声明整型变量或函数  | void | 声明函数无返回值或无参数，声明无类型指针 
long | 声明长整型变量或函数  | [if](./c_conditions.md) | 条件语句 
[float](./c_variables.md) | 声明浮点型变量或函数  | [else](./c_conditions.md) | 条件语句否定分支（与 if 连用） 
double | 声明双精度变量或函数  | [switch](./c_switch.md) | 用于开关语句 
[char](./c_strings.md) | 声明字符型变量或函数  | case | 开关语句分支 
[struct](./c_structs.md) | 声明结构体变量或函数  | [for](./c_for_loop.md) | 一种循环语句 
union | 声明共用数据类型  | do | 循环语句的循环体 
[enum](./c_enum.md) | 声明枚举类型  | [while](./c_while_loop.md) | 循环语句的循环条件 
typedef | 用以给数据类型取别名  | goto | 无条件跳转语句 
[const](./c_constants.md) | 声明只读变量  | [continue](./c_break_continue.md) | 结束当前循环，开始下一轮循环 
unsigned | 声明无符号类型变量或函数  | [break](./c_break_continue.md) | 跳出当前循环 
signed | 声明有符号类型变量或函数  | default | 开关语句中的“其他”分支 
extern | 声明变量是在其他文件正声明  | sizeof | 计算数据类型长度 
register | 声明寄存器变量  | return | 子程序返回语句(可以带参数，也可不带参数)循环条件 
<!--rehype:style=width: 100%; display: inline-table;-->
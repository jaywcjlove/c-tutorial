C 中文件处理
===

在编程中，我们可能需要多次生成某些特定的输入数据。有时，仅在控制台上显示数据是不够的。要显示的数据可能非常大，在控制台上只能显示有限的数据，而且由于内存是容易丢失的，不可能一次又一次地恢复程序生成的数据。 但是，如果我们需要这样做，我们可以将其存储到本地文件系统中，该文件系统是易失的，并且每次都可以访问。 在这里，需要在 C 中处理文件。

C 中的文件处理使我们能够通过我们的 C 程序创建、更新、读取和删除存储在本地文件系统中的文件。 可以对文件执行以下操作。

- 创建新文件
- 打开现有文件
- 从文件中读取
- 写入文件
- 删除文件

## 文件处理函数

C 库中有许多函数可以打开、读取、写入、搜索和关闭文件。 文件函数列表如下：

函数 | 描述 Description
---- | ----
fopen() | 打开新文件或现有文件
fprintf() | 将数据写入文件
fscanf() | 从文件中读取数据
fputc() | 将一个字符写入文件
fgetc() | 从文件中读取一个字符
fclose() | 关闭文件
fseek() | 将文件指针设置到给定位置
fputw() | 将整数写入文件
fgetw() | 从文件中读取一个整数
ftell() | 返回当前位置
rewind() | 将文件指针设置为文件的开头
<!--rehype:style=width: 100%; display: inline-table;-->

## 打开文件：fopen()

我们必须先打开一个文件，然后它才能被读取、写入或更新。`fopen()` 函数用于打开文件。`fopen()` 的语法如下所示：

```c
FILE *fopen( const char * filename, const char * mode );  
```

fopen() 函数接受两个参数：

- 文件名（字符串）。 如果文件存储在某个特定位置，那么我们必须提及文件存储的路径。例如，文件名可以像“/some_folder/some_file.ext”。
- 打开文件的模式。 它是一个字符串。

我们可以在 fopen() 函数中使用以下模式之一。

模式 Mode  | 描述 Description
---- | ----
r  | 以读取模式打开一个文本文件，允许读取文件。
w  | 以写模式打开一个文本文件，允许写入文件。
a  | 以追加模式打开一个文本文件，如果文件不存在，则会创建一个新文件。
r+  | 以读写模式打开一个文本文件，允许读写文件。
w+  | 以读写模式打开一个文本文件，允许读写文件。
a+  | 以读写模式打开一个文本文件，允许读写文件。
rb  | 以读取模式打开二进制文件
wb  | 以写入模式打开二进制文件
ab  | 以追加模式打开二进制文件
rb+  | 以读写模式打开二进制文件
wb+  | 以读写模式打开二进制文件
ab+  | 以读写模式打开二进制文件
<!--rehype:style=width: 100%; display: inline-table;-->


```c
#include<stdio.h>
void main( ) {
  FILE *fp;
  char ch;
  fp = fopen("file_handle.c", "r");
  while (1) {
    ch = fgetc(fp);
    if (ch == EOF)
    break;
    printf("%c", ch);
  }
  fclose(fp);
}
```

输出，将打印文件的内容：

```bash
#include<stdio.h>
void main( ) {
  FILE *fp;
  char ch;
  fp = fopen("file_handle.c", "r");
  while (1) {
    ch = fgetc(fp);
    if (ch == EOF)
    break;
    printf("%c", ch);
  }
  fclose(fp);
}
```

## 关闭文件：fclose()

`fclose()` 函数用于关闭文件。 对文件执行所有操作后，必须关闭该文件。`fclose()` 函数的语法如下：

```c
int fclose(FILE *fp);
```

## 写入文件：fprintf()

`fprintf()` 函数用于将字符集写入文件。 它将格式化的输出发送到流。

```c
int fprintf(FILE *stream, const char *format [, argument, ...])  
```

```c
#include <stdio.h>  
main() {
  FILE *fp;
  fp = fopen("file.txt", "w"); // 打开文件
  fprintf(fp, "Hello file by fprintf...\n"); // 将数据写入文件
  fclose(fp); // 关闭文件  
}  
```

## 读取文件：fscanf()

`fscanf()` 函数用于从文件中读取字符集。 它从文件中读取一个单词并在文件末尾返回 EOF。

```c
int fscanf(FILE *stream, const char *format [, argument, ...])  
```

```c
#include <stdio.h>  
main(){
  FILE *fp;
  char buff[255]; // 创建 char 数组来存储文件数据
  fp = fopen("file.txt", "r");
  while(fscanf(fp, "%s", buff)!=EOF) {
    printf("%s ", buff);
  }
  fclose(fp);
}
```

## C 文件示例：存储员工信息

让我们看一个文件处理示例，用于存储用户从控制台输入的员工信息。 我们将存储员工的 ID、姓名和薪水。

```c
#include <stdio.h>  
void main() {
  FILE *fptr;
  int id;
  char name[30];
  float salary;
  fptr = fopen("emp.txt", "w+"); /* 打开文件 */
  if (fptr == NULL) {
    printf("文件不存在 \n");
    return;
  }
  printf("Enter the id\n");
  scanf("%d", &id);
  fprintf(fptr, "Id= %d\n", id);
  printf("Enter the name \n");
  scanf("%s", name);
  fprintf(fptr, "Name= %s\n", name);
  printf("Enter the salary\n");
  scanf("%f", &salary);
  fprintf(fptr, "Salary= %.2f\n", salary);
  fclose(fptr);
}
```

输出

```bash
Enter the id 
1
Enter the name 
kenny
Enter the salary
120000 
```

现在从当前目录打开文件。你会看到 emp.txt 文件。它有以下信息：

```bash
Id= 1
Name= kenny
Salary= 120000 
```

## 写入文件：fputc()

`fputc()` 函数用于将单个字符写入文件。它将一个字符输出到一个字符串

```c
int fputc(int c, FILE *stream)
```

```c
#include <stdio.h>
main(){
  FILE *fp;
  fp = fopen("file1.txt", "w"); // 打开文件
  fputc('a',fp); // 将单个字符写入文件
  fclose(fp);    // 关闭文件
}
```

## 读取文件：fgetc()

`fgetc()` 函数从文件中返回单个字符。它从流中获取一个字符。它在文件末尾返回 EOF：

```c
int fgetc(FILE *stream)  
```

```c
#include<stdio.h>
#include<conio.h>
void main() {
  FILE *fp;
  char c;
  clrscr();
  fp=fopen("myfile.txt", "r");
  while((c=fgetc(fp))!=EOF){
    printf("%c", c);
  }
  fclose(fp);
  getch();
}
```

## 写入文件：fputs()

`fputs()` 函数将一行字符写入文件。它将字符串输出到流

```c
int fputs(const char *s, FILE *stream)
```

```c
#include<stdio.h>
#include<conio.h>
void main(){
  FILE *fp;
  clrscr();
  fp = fopen("myfile2.txt","w");
  fputs("hello c programming",fp);
  fclose(fp);
  getch();
}
```

## 读取文件：fgets()

`fgets()` 函数从文件中读取一行字符。 它从流中获取字符串：

```c
char* fgets(char *s, int n, FILE *stream)  
```

```c
#include<stdio.h>
#include<conio.h>
void main() {
  FILE *fp;
  char text[300];
  clrscr();

  fp=fopen("myfile2.txt", "r");
  printf("%s", fgets(text, 200, fp));
  fclose(fp);
  getch();
}
```

## fseek()

`fseek()` 函数用于将文件指针设置为指定的偏移量。 它用于将数据写入所需位置的文件：

```c
int fseek(FILE *stream, long int offset, int whence)  
```

`fseek()` 函数中使用了 3 个常量：`SEEK_SET`、`SEEK_CUR` 和 `SEEK_END`。

```c
#include <stdio.h>
void main(){
  FILE *fp;
  fp = fopen("myfile.txt","w+");
  fputs("This is Book", fp);

  fseek(fp, 7, SEEK_SET);
  fputs("Kenny Wong", fp);
  fclose(fp);
}
```

## rewind()

`rewind()` 函数将文件指针设置在流的开头。 如果您必须多次使用流，这很有用：

```c
void rewind(FILE *stream)
```

```c
#include<stdio.h>
#include<conio.h>
void main(){
  FILE *fp;
  char c;
  clrscr();
  fp=fopen("file.txt", "r");
  while((c=fgetc(fp)) != EOF){
    printf("%c", c);
  }
  rewind(fp); // 将文件指针移动到文件的开头
  while((c=fgetc(fp)) != EOF){
    printf("%c", c);
  }
  fclose(fp);
  getch();
}
// 输出
// Hello World!Hello World!
```

如您所见，`rewind()` 函数将文件指针移动到文件的开头，这就是 `Hello World!` 被打印 2 次的原因。 如果你不调用 `rewind()` 函数，“Hello World!” 将只打印一次。

## ftell()

`ftell()` 函数返回指定流的当前文件位置。 我们可以使用 `ftell()` 函数在文件末尾移动文件指针后获取文件的总大小。 我们可以使用 `SEEK_END` 常量将文件指针移动到文件末尾。

```c
long int ftell(FILE *stream)  
```

```c
#include <stdio.h>
#include <conio.h>
void main (){
   FILE *fp;
   int length;
   clrscr();
   fp = fopen("file.txt", "r");
   fseek(fp, 0, SEEK_END);

   length = ftell(fp);

   fclose(fp);
   printf("Size of file: %d bytes", length);
   getch();
}
// 输出
// Size of file: 18 bytes
```
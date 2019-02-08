#include <stdio.h>

int main(void)
{
  int total_pets;
  int cats;
  int dogs;
  int ponies;
  int others;

  // 设置每种宠物的数量
  cats = 2;
  dogs = 1;
  ponies = 1;
  others = 46;

  // 计算宠物总数
  total_pets = cats + dogs + ponies + others;

  printf("我们共有 %d 只宠物!\n", total_pets); // 输出结果
  return 0;
}

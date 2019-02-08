#include <stdio.h>

int main(void)
{
  int cookies = 5;           // 饼干总数
  int cookie_calories = 125; // 每卡路里需要的饼干
  int total_eaten = 0;       // 吃饼干总数

  int eaten = 2;             // 要吃的数量
  cookies = cookies - eaten; // 减去吃掉饼干，获取剩下的饼干
  total_eaten = total_eaten + eaten;
  printf("\n我吃了 %d 个饼干。 剩下 %d 个饼干。", eaten, cookies);

  eaten = 3;                 // 吃掉饼干的新值，重新赋值
  cookies = cookies - eaten; // 减去吃掉饼干，获取剩下的饼干
  total_eaten = total_eaten + eaten;
  printf("\n我又吃了 %d 个。 现在剩下 %d 个饼干。\n", eaten, cookies);
  printf("\n消耗的总能量为 %d 卡路里。\n", total_eaten * cookie_calories);
  return 0;
}

#include <stdio.h>

int main(void)
{
  float plank_length = 10.0f; // 长度
  float piece_count = 4.0f;   // 多少块
  float piece_length = 0.0f;  // 每块的长度

  piece_length = plank_length / piece_count;
  printf("一块 %f 英尺长的木板可以切成 %f 块 %f 英尺长。\n", plank_length, piece_count, piece_length);
  return 0;
}

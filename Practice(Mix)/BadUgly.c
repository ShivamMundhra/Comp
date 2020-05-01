#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t > 0)
  {
    t--;
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
      printf("1");
      continue;
    }
    int output = 0, c = 1;
    while (n != 0)
    {
      if (c == 1)
      {
        output = output * 10 + 4;
        c = 0;
        n /= 10;
      }
      else
      {
        output = output * 10 + 7;
        n /= 10;
      }
    }
    printf("%d", output);
  }
}
#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  int s, w1, w2, w3;
  while (t > 0)
  {
    t--;
    scanf("%d%d%d%d", &s, &w1, &w2, &w3);
    int r = (w1 + w2 + w3) % s;
    if (r == 0)
    {
      printf("%d\n", ((w1 + w2 + w3) / s));
    }
    else
    {
      printf("%d\n", ((w1 + w2 + w3) / s) + 1);
    }
  }
}
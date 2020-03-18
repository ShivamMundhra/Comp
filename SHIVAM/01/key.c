#include <stdio.h>
int main()
{
  int r1, r2, c1, c2, d1, d2;
  scanf("%d %d", &r1, &r2);
  scanf("%d %d", &c1, &c2);
  scanf("%d %d", &d1, &d2);
  int x1, x3;
  float d = (d1 + r1 - c2) / 2.0;
  float e = (c1 - r1 + d2) / 2.0;
  if (d != (int)d)
    x1 = (int)d + 1;
  else
    x1 = (int)d;
  if (e != (int)e)
    x3 = (int)e + 1;
  else
    x3 = (int)e;
  int x2 = r1 - x1;
  int x4 = r2 - x3;
  if (x1 == x2 || x1 == x3 || x1 == x4 || x2 == x3 || x2 == x4 || x3 == x4)
  {
    printf("-1\n");
    return 0;
  }
  if (x1 < 1 || x1 > 9)
  {
    printf("-1\n");
    return 0;
  }
  if (x2 < 1 || x2 > 9)
  {
    printf("-1\n");
    return 0;
  }
  if (x3 < 1 || x3 > 9)
  {
    printf("-1\n");
    return 0;
  }
  if (x4 < 1 || x4 > 9)
  {
    printf("-1\n");
    return 0;
  }
  printf("%d %d\n", x1, x2);
  printf("%d %d\n", x3, x4);
}
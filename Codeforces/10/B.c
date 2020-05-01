#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t > 0)
  {
    t--;
    int Tmin = 24 * 60;
    int h, m;
    scanf("%d %d", &h, &m);
    int remMin = Tmin - (h * 60 + m);
    printf("%d\n", remMin);
  }
}
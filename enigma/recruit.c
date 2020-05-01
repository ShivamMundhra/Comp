#include <stdio.h>
int main()
{
  long int n;
  scanf("%ld", &n);
  long int m, c, x, y, p, power1 = 0, power2 = 0;
  scanf("%ld %ld", &m, &c);
  while (n != 0)
  {
    n--;
    scanf("%ld %ld %ld", &x, &y, &p);
    if ((y - (m * x) - c) > 0)
      power1 += p;
    else
      power2 += p;
  }
  if (power1 >= power2)
    printf("%ld", power1);
  else
  {
    printf("%ld", power2);
  }
  return 0;
}
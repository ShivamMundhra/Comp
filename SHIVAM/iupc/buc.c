#include <stdio.h>
int main()
{
  long int t;
  unsigned long long int s, r;
  scanf("%ld", &t);
  while (t != 0)
  {
    t--;
    scanf("%lld", &s);
    r = s % 12;
    if (r == 1)
    {
      printf("%lld\nBlue\n", (s + 11));
      
    }
    if (r == 2)
    {
      printf("%lld\nYellow\n", (s + 9));
      
    }
    if (r == 3)
    {
      printf("%lld\nRed\n", (s + 7));
      
    }
    if (r == 4)
    {
      printf("%lld\nRed\n", (s + 5));
      
    }
    if (r == 5)
    {
      printf("%lld\nYellow\n", (s + 3));
      
    }
    if (r == 6)
    {
      printf("%lld\nBlue\n", (s + 1));
      
    }
    if (r == 7)
    {
      printf("%lld\nBlue\n", (s - 1));
      
    }
    if (r == 8)
    {
      printf("%lld\nYellow\n", (s - 3));
      
    }
    if (r == 9)
    {
      printf("%lld\nRed\n", (s - 5));
      
    }
    if (r == 10)
    {
      printf("%lld\nRed\n", (s - 7));
      
    }
    if (r == 11)
    {
      printf("%lld\nYellow\n", (s - 9));
      
    }
    if (r == 12)
    {
      printf("%ld\nBlue\n", (s - 11));
      
    }
  }
  return 0;
}
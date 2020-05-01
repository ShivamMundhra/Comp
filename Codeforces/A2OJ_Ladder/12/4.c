#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int temp = n - 10;
  if (temp > 11 || temp < 0)
  {
    printf("0");
  }
  else if (temp == 10)
  {
    printf("15");
  }
  else if (temp == 0)
  {
    printf("0");
  }
  else
  {
    printf("4");
  }
}
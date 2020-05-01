#include <stdio.h>
int main()
{
  long long int n;
  scanf("%lld", &n);
  long long int m = (n * (n + 1)) / 2;
  printf("%lld", (m % 2));
}
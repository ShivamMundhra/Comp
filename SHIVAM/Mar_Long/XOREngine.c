#include <stdio.h>
int findParity(int x)
{
  int y = x ^ (x >> 1);
  y = y ^ (y >> 2);
  y = y ^ (y >> 4);
  y = y ^ (y >> 8);
  y = y ^ (y >> 16);

  // Rightmost bit of y holds the parity value
  // if (y&1) is 1 then parity is odd else even
  if (y & 1)
    return 1;
  return 0;
}
int main()
{
  int t;
  scanf("%d", &t);
  while (t > 0)
  {
    t--;
    int n, q;
    scanf("%d%d", &n, &q);
    int a[n];
    int temp, t, even, odd;
    int ftemp, fn;
    even = 0;
    odd = 0;
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
      fn = findParity(a[i]);
      if (fn == 0)
        even++;
      else
        odd++;
    }
    for (int i = 0; i < q; i++)
    {
      scanf("%d", &temp);
      ftemp = findParity(temp);
      if (ftemp == 0)
      {
        t = even;
      }
      else
      {
        t = odd;
      }
      printf("%d %d\n", t, n - t);
    }
  }
  return 0;
}
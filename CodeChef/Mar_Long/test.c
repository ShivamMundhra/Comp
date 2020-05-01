#include <stdio.h>
int findParity(int n)
{

  // int y = x ^ (x >> 1);
  // y = y ^ (y >> 2);
  // y = y ^ (y >> 4);
  // y = y ^ (y >> 8);
  // y = y ^ (y >> 16);

  // // Rightmost bit of y holds the parity value
  // // if (y&1) is 1 then parity is odd else even
  // if (y & 1)
  //   return 1;
  // return 0;
  int parity = 0;
  while (n)
  {
    parity = !parity;
    n = n & (n - 1);
  }
  return parity;
}
int main()
{
  // int a = 3, b = 15, c;
  // c = a ^ b;
  // printf("%d", findParity(c));
  // return 0;
  int a = 3, b = 2;
  float c = a / (float)b;
  printf("%f", c);
}
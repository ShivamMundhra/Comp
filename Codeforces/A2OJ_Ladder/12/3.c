// #include <stdio.h>
// int main()
// {
//   int a, b;
//   scanf("%d", &a);
//   scanf("%d", &b);
//   int c = 0, rev = 0, ans = 0;
//   while (a != 0)
//   {
//     int temp1 = a % 10;
//     int temp2 = b % 10;
//     a /= 10;
//     b /= 10;
//     c = c * 10 + 1;
//     if (temp1 != temp2)
//       rev = rev * 10 + 1;
//     else
//       rev = rev * 10 + 0;
//   }
//   while (c != 0)
//   {
//     int temp3 = rev % 10;
//     printf("%d", temp3);
//     rev /= 10;
//     c /= 10;
//   }
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char a[101], b[101];
  scanf("%s", a);
  scanf("%s", b);
  // printf("%s\n", a);
  // printf("%s\n", b);
  for (int i = 0; i < strlen(a); i++)
  {
    // printf("a:%c :: %c", a[i], b[i]);
    if (a[i] == b[i])
      printf("0");
    else
      printf("1");
  }
}
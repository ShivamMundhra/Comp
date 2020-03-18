// #include <stdio.h>
// int main()
// {
//   int t;
//   scanf("%d", &t);
//   long int n;
//   while (t != 0)
//   {
//     t--;
//     scanf("%ld", &n);
//     long int arr[n];
//     for (long int i = 0; i < n; i++)
//     {
//       scanf("%ld", &arr[i]);
//     }
//     long int q, l, r, count = 0;
//     scanf("%ld", &q);
//     while (q != 0)
//     {
//       q--;
//       count = 0;
//       scanf("%ld %ld", &l, &r);
//       for (long int i = l - 1; i < r; i++)
//       {
//         if (arr[i] % 2 == 0)
//         {
//           count++;
//           break;
//         }
//       }
//       if (count == 1)
//       {
//         printf("EVEN\n");
//       }
//       else
//         printf("ODD\n");
//     }
//   }
//   return 0;
// }
#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  long int n;
  while (t != 0)
  {
    t--;
    scanf("%ld", &n);
    long int arr[n], x[n];
    long int ind = 0;
    for (long int i = 0; i < n; i++)
    {
      scanf("%ld", &arr[i]);
      if (arr[i] % 2 == 0)
      {
        x[ind] = arr[i];
        ind++;
      }
    }
    long int q, l, r, count = 0;
    scanf("%ld", &q);
    while (q != 0)
    {
      q--;
      count = 0;
      scanf("%ld %ld", &l, &r);
      for (long int i = 0; i < ind - 1; i++)
      {
        if (x[i] >= l - 1 && x[i] <= r - 1)
        {
          count++;
          break;
        }
      }
      if (count == 1)
      {
        printf("EVEN\n");
      }
      else
        printf("ODD\n");
    }
  }
  return 0;
}
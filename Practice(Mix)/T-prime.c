#include <stdio.h>
#include <math.h>
// void sieve(int *is_prime, int N)
// {
//   // We cross out all composites from 2 to sqrt(N)
//   int i = 2;
//   // This will loop from 2 to int(sqrt(x))
//   while (i * i <= N)
//   {
//     // If we already crossed out this number, then continue
//     if (is_prime[i] == 0)
//     {
//       i++;
//       continue;
//     }
//     int j = 2 * i;
//     while (j < N)
//     {
//       // Cross out this as it is composite
//       is_prime[j] = 0;
//       // j is incremented by i, because we want to cover all multiples of i
//       j += i;
//     }
//     i++;
//   }
// }
int main()
{
  int t;
  scanf("%d", &t);
  int a[1000001];
  for (int i = 0; i < 1000001; i++)
  {
    a[i] = 1;
  }
  a[0] = 0;
  a[1] = 0;
  // sieve(a, 1000001);
  while (t > 0)
  {
    t--;
    long long int n;
    scanf("%lld", &n);
    float num = sqrt(n);
    // printf("%d %f\n", (int)num, num);
    if ((int)num == num && a[(int)num] == 1)
    {
      printf("YES\n");
    }
    else
      printf("NO\n");
  }
  return 0;
}
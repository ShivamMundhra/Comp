// #include <stdio.h>
// int reverse(int n)
// {
//     int result = 0, rem;
//     while (n != 0)
//     {
//         rem = n % 10;
//         result = result * 10 + rem;
//         n = n / 10;
//     }
//     return result;
// }
// void rotateArray(int *a, int n)
// {
//     int temp = *(a + n - 1);
//     // printf("%d  ", temp);
//     for (int i = n - 1; i > 0; i--)
//     {
//         *(a + i) = *(a + i - 1);
//     }
//     *(a + 0) = temp;
// }
// int main()
// {
//     // long long int n, m, s;
//     // scanf("%lld%lld%lld", &n, &m, &s);
//     // if (((s - 1 + (m % n)) % n) == 0)
//     // {
//     //     printf("%lld", n);
//     // }
//     // else
//     //     printf("%lld\n", (((s - 1 + (m % n)) % n)));
//     int arr[] = {1, 2, 3, 4};
//     // rotateArray(arr, 4);
//     for (int i = 0; i < 4; i++)
//     {
//         int x = ((i + (2 % 4)) % 4);
//         printf("%d ", arr[x]);
//     }
//     return 0;
// }
#include <stdio.h>
void rotateArray(long int *a, long int n)
{
    long int temp = *(a + n - 1);
    for (long int i = n - 1; i > 0; i--)
    {
        *(a + i) = *(a + i - 1);
    }
    *(a + 0) = temp;
}
int main()
{
    long int n, k;
    int q;
    scanf("%ld%ld%d", &n, &k, &q);
    long int a[n];
    for (long int i = 0; i < n; i++)
        scanf("%ld", (a + i));
    // for(long int i=0;i<k%n;i++)
    // {
    //     rotateArray(a,n);
    // }
    for (int i = 0; i < q; i++)
    {
        int t;
        scanf("%d", &t);
        int x = ((t + (k % n)) % n);
        printf("%ld\n", *(a + x));
    }
}
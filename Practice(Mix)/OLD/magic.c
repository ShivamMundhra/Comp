#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        long int a, b, count = 0;
        scanf("%ld%ld", &a, &b);
        // for(long int j=a;j<=b;j++){
        //     double d=sqrt(j);
        //     if(d==(int)d)
        //         count++;
        // }
        // double d=(sqrt(b)-sqrt(a));
        // if(d>=1)
        //     count=(int)d +1;
        count = (int)(floor(sqrt(b)) - ceil(sqrt(a))) + 1;
        printf("%ld\n", count);
    }
    return 0;
}

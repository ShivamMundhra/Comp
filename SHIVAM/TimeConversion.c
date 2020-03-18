#include <stdio.h>
/* wRONG sOLUTION

int main()
{
    int arr[3], j = 0;
    char c;
    for (int i = 0; i < 6; i++)
    {
        if (i != 1 && i != 3 && i != 5)
        {
            scanf("%d", &arr[j]);
            j++;
        }
        else if (i == 5)
            scanf("%c", &c);
    }
    j = 0;
    if (c == 'P')
    {
        if (arr[0] != 12)
            arr[0] += 12;
    }
    else
    {
        if (arr[0] == 12)
            arr[0] = 0;
    }
    for (int i = 0; i < 6; i++)
    {
        if (i == 1 || i == 3)
            printf(":");
        else
        {
            printf("%d", arr[j]);
            j++;
        }
    }
    return 0;
}

*/
// SIMPLE SOLUTION
int main()
{
    int hh, mm, ss;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12);
    if (t12[0] == 'P' && hh != 12)
        hh += 12;
    if (t12[0] == 'A' && hh == 12)
        hh = 0;
    /*if (hh < 10)
        print("0%d:", hh);
    else
        print("%d:", hh);
    if (mm < 10)
        print("0%d:", mm);
    else
        print("%d:", mm);
    if (ss < 10)
        print("0%d", ss);
    else
        print("%d:", ss);
    */
    printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}
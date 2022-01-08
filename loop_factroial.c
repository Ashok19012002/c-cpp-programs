#include <stdio.h>

int main()
{
    int a = 1, n, f=1;
    scanf("%d", &n);
    while (a<=n)
    {
        f=a*f;
        a++;
    }
    printf("The factroil is %d \n",f);
    return 0;
}
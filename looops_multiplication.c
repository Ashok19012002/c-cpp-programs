#include <stdio.h>

int main()
{
    int i = 1, n,f=1;
    scanf("%d",&n);
    while (i<11)
    {
        f=n*i;
        printf("%d * %d = %d \n",n,i,f);
        i++;
    }
    
    return 0;
}
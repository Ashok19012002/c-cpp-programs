#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the two number ");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        while (c != 0)
        {
            c = b % a;
            c = a % c;
        }
        printf("the hcf is %d", c);
    }
    else
    {
        while (c != 0)
        {
            c = a % b;
            c = b % c;
        }
        printf("the hcf is %d", c);
    }
    return 0;
}
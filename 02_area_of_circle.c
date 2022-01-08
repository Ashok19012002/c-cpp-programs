#include <stdio.h>

int main()
{
    // int a;
    // float c,f=3.14;
    // printf("Enter the vlaue of radius of circle ");
    // scanf("%d",&a);
    // c = f*a*a;
    // printf("The area of circle is %f \n",c);
    float c = 3.14, r, h;
    printf("Enter the value of radius and height of cylinder \n");
    scanf("%f%f", &r, &h);
    printf("The volume of cylinder is %f \n", c * r * r * h);
    return 0;
}
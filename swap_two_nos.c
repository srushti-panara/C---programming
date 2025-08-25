#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Before swapping, first number = %d\n",a);
    printf("Before swapping, second number = %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("After swapping, first number = %d\n",a);
    printf("After swapping, second number = %d\n",b);
    return 0;
}
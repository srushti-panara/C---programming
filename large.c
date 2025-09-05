#include<stdio.h>
int main()
{
    int a, b,c, large;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    large=a;
    if (large<b) {
        large=b;
    }
    if (large<c) {
        large = c ; 
    }
    printf("largest number is %d\n", large);
    return 0;
}
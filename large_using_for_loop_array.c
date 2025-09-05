#include <stdio.h>
int main()
{
    int i, a[10], n=3 , large=0, small;
    printf("Enter three numbers: ");
    // scanf("%d ", &a[i]); 
    for (int i=0; i<=n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &a[i]);
    }
    small = a[0];
    for (i=0; i<=n; i++) {
        if(a[i]>large)
        large=a[i];
    
    if(a[i]<small)
    small=a[i];}
    printf("smallest number is %d\n", small);
    
    printf("largest number is %d\n", large);
    
    return 0;
}
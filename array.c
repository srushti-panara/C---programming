#include <stdio.h>

int main() {
    int n;         
    printf("Enter number of elements: ");      
    scanf("%d", &n);      
    int a[n];           
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);  
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }
    return 0;

}

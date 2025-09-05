#include<stdio.h>
int main() {
    int sum = 0, n, i;
    printf("Enter a natural no.: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}

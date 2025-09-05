#include<stdio.h>
int main() {
    int factorial = 1, n, i;
    printf("Enter a natural no.: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i) {
        factorial *= i;
    }
    printf("Factorial of first %d natural numbers is: %d\n", n, factorial);
    return 0;
}

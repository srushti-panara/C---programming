#include <stdio.h>

int main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (int n = start; n <= end; n++) {
        int isPrime = 1; // assume number is prime

        if (n <= 1) {
            isPrime = 0; // numbers <= 1 are not prime
        } else {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = 0; // not prime
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", n);
        }
    }

    printf("\n");
    return 0;
}

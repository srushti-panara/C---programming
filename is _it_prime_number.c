#include<stdio.h>
int main() {
    int n, isPrime = 1;   // assuming number is prime
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n <= 1) {
        isPrime = 0;  // numbers less than or equal to 1 are not prime
    } else {
        for(int i = 2;  i <= n/2 ; i++) {  // check divisibility from 2 to sqrt(n)
            if(n % i == 0) {
                isPrime = 0;  // number is not prime
                break;  // exit loop as we found a factor
            }
        }
        if (isPrime) {
            printf("%d is a prime number.\n", n);
        } 
        else {
            printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
}


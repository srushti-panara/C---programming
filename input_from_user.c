//takes two inputs from the user one after the other and prints them

#include <stdio.h>
int main() {
    int firstValue, secondValue;

    // Take first input
    printf("Enter the first value: ");
    scanf("%d", &firstValue);
    printf("You entered: %d\n", firstValue);

    // Take second input
    printf("Enter the second value: ");
    scanf("%d", &secondValue);
    printf("You entered: %d\n", secondValue);
    return 0;
}

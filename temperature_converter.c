#include <stdio.h>
int main() {
    float temp, fahrenheit, celsius;
    int choice;
    printf("Choose conversion:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n ");
    scanf("%d", &choice);
    printf("Enter temperature: ");
    scanf("%f", &temp);
    if (temp >= 0 && temp <= 100) {
        // Convert Celsius to Fahrenheit
        fahrenheit = (temp * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else if (temp >= 32 && temp <= 212) {
        // Convert Fahrenheit to Celsius
        celsius = (temp - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else {
        printf("Invalid temperature entered.\n");
    }
    return 0;
}

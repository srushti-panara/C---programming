#include<stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 0 && age <= 12) {
        printf("You are a child.\n");
    } else if (age >= 13 && age <= 19) {
        printf("You are a teenager.\n");
    } else if (age >= 20 && age <= 36) {
        printf("You are an adult.\n");
    } else if (age >= 37 && age <= 55) {
        printf("You are middle-aged.\n");
    } else if (age >= 56 ){
        printf ("You are a senior citizen.\n");
    } else {
        printf("Invalid age entered.\n");
    }
    return 0;
}

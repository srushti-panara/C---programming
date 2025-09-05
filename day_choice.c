#include <stdio.h>
int main() {
    int choice;
    printf("1. Monday\n , 2. Tuesday\n , 3. Wednesday\n , 4. Thursday\n , 5. Friday\n , 6. Saturday\n , 7. Sunday\n");
    printf("Enter your choice (1-7):");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
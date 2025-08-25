#include <stdio.h>
int main() {
    int length, breadth, area;

    // Take length input
    printf("Enter the length of the rectangle: \n ");
    scanf("%d", &length);

    // Take width input
    printf("Enter the breadth of the rectangle: \n");
    scanf("%d", &breadth);

    // Calculate area
    area = length * breadth;

    // Print area
    printf("The area of the rectangle is: %d \n", area);
    return 0;
}
#include<stdio.h>
int main(){
  int side, base, height;
    float area, perimeter;
    printf("Enter side: ");
    scanf("%d", &side);
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter height: ");
    scanf("%d", &height);
    area = 0.5 * base * height;
    perimeter = side + side + side;
    printf("Area of triangle = %.2f\n", area);
    printf("Perimeter of triangle = %.2f\n", perimeter);
    return 0;
}  



#include<stdio.h>
   int main() {
       float temperature;
       printf("Enter the temperature in Celsius:\n ");
       scanf("%f", &temperature);
       if (temperature > 37.5) {
           printf("You have a fever.\n");
       } else {
           printf("You do not have a fever.\n");
       }
       return 0;
   }
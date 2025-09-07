#include<stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {          // number of rows
        for(int j = 1; j <= 5 - i; j++) {  // print spaces
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {      // print stars
            printf("* ");
        }
        printf("\n"); // move to next line
    }
    return 0;
}
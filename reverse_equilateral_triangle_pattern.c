// Program to print reverse right triangle pattern using asterisks

#include <stdio.h>
int main() {
    for (int i = 5; i >= 1; i--) {          // rows
        for (int j = 5; j > i; j--) {       // spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {   // stars
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}


/* 

// Reverse Equilateral Triangle Pattern with same Numbers in single row

#include <stdio.h>
int main() {
    for (int i = 5; i >= 1; i--) {          // rows
        for (int j = 5; j > i; j--) {       // spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {   // stars
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

*/
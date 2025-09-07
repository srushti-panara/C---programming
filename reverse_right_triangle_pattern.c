#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {      // number of rows
        for (int j = 1; j <= i; j++) {  // print stars
            printf("*");
        }
        printf("\n"); // move to next line
    }
    return 0;
}

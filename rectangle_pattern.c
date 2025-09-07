#include <stdio.h>

int main() {
    int rows = 4;   // number of rows
    int columns = 6;   // number of columns

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*
Dry run:
For rows = 4 and columns = 6
Output:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
Explanation:
1. The outer loop runs 4 times (for each row).
2. The inner loop runs 6 times (for each column in a row), printing an asterisk followed by a space.
3. After the inner loop completes, a newline character is printed to move to the next row. 
4. This process repeats until all rows are printed. 

*/
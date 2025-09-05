#include <stdio.h>
int main() {
    int amount, discount = 0, final_amount;  
    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 1999 && amount <= 4999) {
        discount = (amount * 10) / 100;
        printf("You get a discount of 10%%. Discount amount: %d\n", discount);
    } 
    else if (amount >= 5000 && amount <= 9999) {
        discount = (amount * 20) / 100;
        printf("You get a discount of 20%%. Discount amount: %d\n", discount);
    } 
    else if (amount > 9999) {
        discount = (amount * 30) / 100;
        printf("You get a discount of 30%%. Discount amount: %d\n", discount);
    } 
    else {
        printf("No discount available for the entered amount.\n");
    }

    final_amount = amount - discount;
    printf("Final amount to be paid: %d\n", final_amount);

    return 0;
}

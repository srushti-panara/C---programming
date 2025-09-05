#include <stdio.h>
int main() {
    int a,b,gcd=1;
    printf("Enter a : ");
    scanf(" %d",&a);
    printf("Enter b : ");
    scanf(" %d",&b);
    for(int i=1; i<=a && i<=b; i++) {  // used for loop - it loops till the smaller number
        if(a%i==0 && b%i==0) {
            gcd=i;
        }
    }
    printf("GCD of %d and %d is %d\n",a,b,gcd);
    return 0;
}

/*
    Sample Input and Output :
    Enter a : 20
    Enter b : 30
    GCD of 20 and 30 is 10
    Explanation :
    Factors of 20 : 1,2,4,5,10,20
    Factors of 30 : 1,2,3,5,6,10,15,30
    Common factors : 1,2,5,10
    Greatest common factor : 10
    Hence, GCD of 20 and 30 is 10

Dry Run :
    i=1 : 20%1==0 && 30%1==0  -> gcd=1
    i=2 : 20%2==0 && 30%2==0 -> gcd=2
    i=3 : 20%3!=0 && 30%3==0 -> gcd=2
    .
    .
    i=29 : 20%29!=0 && 30%29!=0 -> gcd=10
    i=30 : 20%30!=0 && 30%30==0 -> gcd=10
    Loop ends as i<=a && i<=b condition fails
*/
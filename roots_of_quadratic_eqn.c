#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c ;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    float d = b*b - 4*a*c ;
    if(d>0)
    {
        float r1 = (-b + sqrt(d)) / (2*a);
        float r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n",r1);
        printf("Root 2 = %.2f\n",r2);
    }
    else if(d==0)
    {
        float r1 = -b / (2*a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n",r1);
    }
    else
    {
        float realPart = -b / (2*a);
        float imagPart = sqrt(-d) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n",realPart,imagPart);
        printf("Root 2 = %.2f - %.2fi\n",realPart,imagPart);
    }
    return 0;
}
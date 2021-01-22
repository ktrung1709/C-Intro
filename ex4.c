#include <stdio.h>
typedef struct {
    int numerator;
    int denominator;
}fraction;

int main(){
    int i, n;
    printf("Enter the number of fractions: ");
    scanf("%d", &n);
    fraction a[n];
    fraction f1,f2;
    int x;
    //Input for an array of fraction//
    for (i=0;i<n;i++){
        printf("Enter the numerator: ");
        scanf("%d", &a[i].numerator);
        printf("Enter the denominator: ");
        scanf("%d", &a[i].denominator);
    }
    //Print the content of the fraction array//
    printf("\nThe array of fractions contains: \n");
    for (i=0;i<n;i++)
        printf("%d/%d\t", a[i].numerator, a[i].denominator);
    //inverse all fraction in the array//
    printf("\n\nThe inverse of all fractions in the array is: \n");
    for (i=0;i<n;i++){
        if (a[i].numerator == 0)
            printf("Can not reverse %d/%d\n", a[i].numerator, a[i].denominator);
        else
            printf("%d/%d\t", a[i].denominator, a[i].numerator);
    }
    printf("\n\n");
    //Compare 2 fractions//
    printf("Enter the first fraction's numerator: ");
    scanf("%d", &f1.numerator);
    printf("Enter the first fraction's denominator: ");
    scanf("%d", &f1.denominator);
    printf("Enter the second fraction's numerator: ");
    scanf("%d", &f2.numerator);
    printf("Enter the second fraction's denominator: ");
    scanf("%d", &f2.denominator);
    x = f1.numerator*f2.denominator - f2.numerator*f1.denominator;
    if (x<0)
        printf("\n\n%d/%d < %d/%d\n", f1.numerator,f1.denominator,f2.numerator,f2.denominator);
    else if (x>0)
        printf("\n\n%d/%d > %d/%d\n", f1.numerator,f1.denominator,f2.numerator,f2.denominator);
    else
        printf("\n\n%d/%d = %d/%d\n", f1.numerator,f1.denominator,f2.numerator,f2.denominator);
    return 0;
}

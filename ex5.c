#include <stdio.h>
typedef struct {
    int numerator;
    int denominator;
}fraction;
fraction simple(fraction f){
    int min = 0, i = 1, uoc_chung = 1;
    if(f.numerator>f.denominator)
        min = f.denominator;
    else
        min = f.numerator;
    for(i=1;i<=min;i++)
        if (f.numerator%i==0 && f.denominator%i==0)
            uoc_chung = i;
    f.numerator = f.numerator/uoc_chung;
    f.denominator = f.denominator/uoc_chung;
    return f;
}//Function to simple a fraction//

int main(){
    fraction f,f1,f2, sum, product;
    //Simple a fraction//
    printf("Enter the fraction needs to be simplified\n");
    printf("Enter the numerator: ");
    scanf("%d", &f.numerator);
    printf("Enter the denominator: ");
    scanf("%d", &f.denominator);
    printf("\nThe simple fraction is %d/%d\n\n", simple(f).numerator, simple(f).denominator);
    //Add and multiply 2 fractions//
    printf("Enter the first fraction's numerator: ");
    scanf("%d", &f1.numerator);
    printf("Enter the first fraction's denominator: ");
    scanf("%d", &f1.denominator);
    printf("Enter the second fraction's numerator: ");
    scanf("%d", &f2.numerator);
    printf("Enter the second fraction's denominator: ");
    scanf("%d", &f2.denominator);
    sum.numerator = f1.numerator*f2.denominator + f2.numerator*f1.denominator;
    sum.denominator = f1.denominator * f2.denominator;
    product.numerator = f1.numerator * f2.numerator;
    product.denominator = f1.denominator * f2.denominator;
    printf("\n\nThe sum of 2 fractions is %d/%d\n\n", simple(sum).numerator, simple(sum).denominator);
    printf("The product of 2 fractions is %d/%d\n", simple(product).numerator, simple(product).denominator);
    return 0;
}

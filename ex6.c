#include <stdio.h>
void incomeplus(long *current, int year){
if (year > 3)
    *current = *current + 300000;
}
void main(void)
{
long cursal; int year;
do {
    printf("Enter your current salary: ");
    scanf("%ld",&cursal);
    printf("Number of years passed: ");
    scanf("%d", &year);
    incomeplus(&cursal,year);
    printf("Your salary now: %ld\n", cursal);
}while(year!=-1);

}

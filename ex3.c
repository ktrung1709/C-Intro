#include <stdio.h>
#include <ctype.h>
int main(){
char customer_number[7];
int i, a = 0, b = 0;
printf("Enter your customer number (7 digits): ");
gets(customer_number);
for (i=0;i<4;i++)
    if (isalpha(customer_number[i]))
        a++;
for (i=4;i<7;i++)
    if (isdigit(customer_number[i]))
        b++;
if (a==4 && b==3)
    printf("That is a valid customer number\n");
else
    printf("That is not a valid customer number\n");
}

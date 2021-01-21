#include <stdio.h>
#include <string.h>
int main(){
char list[5][50] = {"TV127 31 inch Television", "CD057 CD Player", "TA877 Answering Machine", "CS409 Car Stereo", "PC655 Personal Computer"};
char user_input[50], *product_number = NULL;
int i;
printf("Enter the product number: ");
scanf("%s", user_input);
for (i = 0; i<5; i++){
product_number = strstr(list[i], user_input);
if (product_number != NULL)
    break;
}
if (product_number==NULL)
    printf("No match was found\n");
else
    printf("The product you're searching for is %s\n", product_number);
return 0;
}

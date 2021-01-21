#include <stdio.h>
void main(){
int i;
char str[500];
printf("Enter a string: ");
gets(str);
for (i=0; str[i]!='\0'; i++)
    if (str[i]==',' || str[i]=='.' || str[i]==';' || str[i]==':' || str[i]=='!' || str[i]=='?')
        str[i] = ' ';
printf("%s\n", str);
}

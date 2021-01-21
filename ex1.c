#include <stdio.h>
#include <stdlib.h>
int main(){
char line[50];
int i = 0, count = 0;
printf("Enter a string of characters: ");
gets(line);
while(line[i]!='\0'){
  if (line[i]==' ')
    count++;
  i++;
}
printf("The number of blank spaces of the string is %d\n", count);
return 0;
}

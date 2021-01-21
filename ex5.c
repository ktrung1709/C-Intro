#include <stdio.h>
void first_name(char name[]){
int i = 0;
while (name[i]!=' ' && name[i] != '\0' ){
    i++;
    if (name[i]==' ')
        name[i]= '\0';
}

}
void main(){
char name[50];
printf("Enter your name: ");
gets(name);
first_name(name);
printf("Your first name is %s\n", name);
}

#include <stdio.h>
#include <string.h>
int strend(char s[], char t[]){
int i, j = 0, result = 0, count = 0;
for (i= strlen(s)-strlen(t); s[i]!='\0'; i++){
    if (s[i] == t[j])
        count++;
    j++;}
if (count != 0)
    result = 1;
return result;
}

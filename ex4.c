#include <stdio.h>
char *my_strcpy(char *destination, char *source){
char *p = destination;
while (*source != '\0')
    *p++ = *source++;
*p = '\0';
return destination;
}

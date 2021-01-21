#include <stdio.h>
double *maximum(double *a, int size){
double max = *a;
double *add = NULL;
double *i = a;
if (size == 0)
    return NULL;
else
    for (i=a;i<a+size;i++){
        if (*i > max){
            max = *i;
            add = i;}}
    return add;
}


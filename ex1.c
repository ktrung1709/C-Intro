#include <stdio.h>
int countEven(int *array, int size){
int i, count=0;
for (i = 0;i<size;i++,array++)
    if (*array % 2 == 0)
        count++;
return count;
}

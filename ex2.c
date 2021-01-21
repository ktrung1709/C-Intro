#include <stdio.h>
int main(){
int a[7]= {13, -355, 235, 47, 67, 943, 1222};
int i;
printf("address of first five elements in memory.\n");
for (i=0; i<5;i++)
    printf("a[%d] %p\n",i, &a[i]);
return 0;
}

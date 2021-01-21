#include <stdio.h>
void getSale(float *salefigure, int size){
int i = 0;
for (i=0; i<size;i++){
    printf("Enter the sale figure for quarter %d: ", i+1);
    scanf("%f", salefigure+i);
}
}
float totalSale(float *salefigure, int size){
float sum = 0;
int i;
for (i = 0;i<size; i++, salefigure++){
    sum = sum + *salefigure;
}
return sum;
}

void main(){
float sale[4];
getSale(sale, 4);
printf("The total sale for the year is %0.1f\n", totalSale(sale, 4));
}


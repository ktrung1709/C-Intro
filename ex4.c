#include <stdio.h>
void swap(int *p, int *q, int *r){
int tmp;
tmp= *p; *p=*q; *q=*r; *r=tmp;
}
void main(void){
int a, b, c;
printf("Enter a, b, c: ");
scanf("%d %d %d", &a, &b, &c);
printf("Before swap: a=%d, b=%d, c=%d\n", a, b, c);
swap(&a,&b,&c);
printf("After swap: a=%d, b=%d, c=%d\n", a, b, c);
}

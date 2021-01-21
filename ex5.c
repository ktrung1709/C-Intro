#include<stdio.h>
void swap(int *a, int *b, int *c){
int temp;
temp = *a;
*a = *b;
*b = *c;
*c = temp;
}
int main(){
int x, y, z;
int *p, *q, *r;
printf("Enter 3 integers: ");
scanf("%d %d %d",&x,&y,&z);
p = &x;
q = &y;
r = &z;
printf("x is %d\ny is %d\nz is %d\np is %p\nq is %p\nr is %p\n*p is %d\n*q is %d\n*r is %d\n", x, y, z, p, q, r, *p, *q, *r);
printf("\n");
swap(&x,&y,&z);
printf("x is %d\ny is %d\nz is %d\np is %p\nq is %p\nr is %p\n*p is %d\n*q is %d\n*r is %d\n", x, y, z, p, q, r, *p, *q, *r);
printf("\n");
swap(p,q,r);
printf("x is %d\ny is %d\nz is %d\np is %p\nq is %p\nr is %p\n*p is %d\n*q is %d\n*r is %d\n", x, y, z, p, q, r, *p, *q, *r);
}

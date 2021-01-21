#include <stdio.h>
void main(void)
{
int x, y, z;
int *ptr;
printf("Enter the value of x, y, z: ");
scanf("%d %d %d", &x, &y, &z);
ptr = &x;
*ptr += 100;
ptr = &y;
*ptr += 100;
ptr = &z;
*ptr += 100;
printf("Here are the values of x + 100, y + 100, and z + 100:\n");
printf("%d %d %d\n", x, y, z);
}

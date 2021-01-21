#include<stdio.h>
void reverse(float a[], int n){
int i;
float temp;
for (i=0;i<n/2;i++){
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}
}

void main(){
int i, n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
float a[n];
for (i=0;i<n;i++){
    printf("a[%d] = ", i);
    scanf("%f", &a[i]);
}
reverse(a, n);
printf("\nAfter being reverse array's content is: \n");
for (i=0;i<n;i++)
    printf("%7.2f", a[i]);

}


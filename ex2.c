#include<stdio.h>
int main(){
int i,n,sum;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int a[n-1];
for(i=0; i<n; i++){
    printf("Enter an element of the array: ");
    scanf("%d", &a[i]);
          }
sum = 0;
for (i = 1;i < n;i++){
    if (a[i] > a[i-1] && a[i] > a[i+1])
        sum += a[i];
    }
printf("The sum is %d\n", sum);
}

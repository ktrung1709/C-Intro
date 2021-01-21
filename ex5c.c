#include<stdio.h>
void swap (int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
void main(){
int n, i, j, count;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int a[n];
for (i=0;i<n;i++){
    printf("Enter an element of the array: ");
    scanf("%d", &a[i]);
}
for (i=0; i<n-1; i++)
    for(j=i+1;j<n;j++)
        if (a[i]>a[j])
        swap(&a[i], &a[j]);
i=0,j=0,count=0;
while (i<n) {
        count=0;
        j=i;
        while (a[i]==a[j]) {
                count++; j++;
        }
        printf("\n%d occurs for %d times in array",a[i],count);
        i=j;
}
}

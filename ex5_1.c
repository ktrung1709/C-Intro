#include<stdio.h>
void reverse(int a[], int size){
int i, j, temp;
i=0;
j= size -1;
while(i<j){
    temp=a[i];
    a[i]=a[j];
    a[j]= temp;
    i++;
    j--;
}
}

void main(){
int i, n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int a[n];
for (i=0;i<n;i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
}
reverse(a, n);
printf("\nAfter being reverse array's content is: \n");
for (i=0;i<n;i++)
    printf("%5d", a[i]);
}

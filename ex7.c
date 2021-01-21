#include<stdio.h>
int checksymmetric(int a[], int n){
    int i = 0, j = n - 1;
    while (i<=j){
        if (a[i]!=a[j])
            return 0;
        i++;
        j--;
    }
    return 1;
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
printf("\nArray's content: \n");
for (i=0;i<n;i++)
    printf("%3d", a[i]);
if (checksymmetric(a,n))
    printf("\nThe array is symmetric\n");
else
    printf("\nThe array is not symmetric\n");
}

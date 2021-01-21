#include <stdio.h>
void main(){
int i,j, k,n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int a[n];
for (i=0;i<n;i++){
    printf("a[%d] = ", i+1);
    scanf("%d", &a[i]);
}
for(k=0;k<n;k++){
for(i=k;i<n;i++){
    for(j=k;j<=i;j++)
        printf("%3d", a[j]);
    printf("\n");
}
}
}

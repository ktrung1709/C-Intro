#include<stdio.h>

void sort(int a[], int n){
int i, j, temp;
for (i=0;i<n-1;i++)
    for (j=i+1;j<n;j++)
        if (a[i]<a[j])
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main(){
int n = 10, i;
int a[n];
printf("Enter 10 integers: ");
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}
sort(a,n);
for(i=0;i<n;i++)
    printf("%3d", a[i]);
printf("\n");
for(i=0;i<n;i++)
    if(a[i]%2 != 0)
        printf("%3d", a[i]);
return 0;
}

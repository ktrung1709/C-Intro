#include<stdio.h>

int compare(const int array1[], const int array2[], int size){
int i;
for (i = 0; i < size; i++)
    if (array1[i] != array2[i])
        return 0;
return 1;
}

int main(){
int size, i;
printf("Enter the size of the two arrays: ");
scanf("%d", &size);
int array1[size], array2[size];
for (i=0; i<size; i++){
    printf("Enter an element of the first array: ");
    scanf("%d", &array1[i]);
    }
for (i=0; i<size; i++){
    printf("Enter an element of the second array: ");
    scanf("%d", &array2[i]);
    }
if (compare(array1, array2, size))
    printf("Two arrays are equal\n");
else
    printf("Two arrays are not equal\n");
}

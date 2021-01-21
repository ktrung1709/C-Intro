#include <stdio.h>
#define MAX 100

int main(){
    int a[MAX];
    int i, s, min;
    for (i = 0; i < MAX; i++ ){
            printf("a[%d]=",i);
            scanf("%d", &a[i]);
    }
    s=0; min=a[0];
    for ( i = 0; i < MAX; i++ ){
            if (a[i] < min)
                min = a[i];
            if (a[i]%2==1)
                s= s + a[i];
    }
    printf("The minimum value in the array is %d\n",min);
    printf("The sum of all odd numbers is %d\n",s);
    return 0;
}

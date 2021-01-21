#include<stdio.h>
void check(int n){
    int count = 0, odd = 0, even = 0;
    do{
        if(n%2 == 0)
            even++;
        else
            odd++;
        n = n/10;
        count++;
    }while (n>=1);
    if (odd == count)
        printf("All figures of n is odd\n");
    else if(even == count)
        printf("All figures of n is even\n");
    else
        printf("All figures of n is neither odd nor even\n");
}
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    check(n);
    return 0;
}

#include<stdio.h>
int is_prime(int n){
    int i;
    for (i=2; i<=sqrt(n); i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int n,i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d: \n", n);
    for(i = 2; i <= n;i++){
        if (is_prime(i)){
            printf("%d\n", i);}}
    return 0;
}


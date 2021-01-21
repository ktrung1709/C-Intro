long sumcube(int n){
    int i = 0;
    long s = 0;
    for(i=1; i<=n; i++)
        s+=i*i*i;
    return s;
}

void submultiples(int n){
    int i;
    for(i=1; i<=n; i++)
        if (n%i ==0)
            printf("%d ",i);
    printf("\n");
}

void printsquares(int n){
    int i;
    for(i=1; i<=n; i++)
        printf("%d ",i*i);
    printf("\n");
}

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d\n",sumcube(n));
    submultiples(n);
    printsquares(n);
}

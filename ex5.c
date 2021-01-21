void printnchar(char ch, int n){
    int i;
    for(i = 1; i <= n; i++)
        printf("%c", ch);
    printf("\n");
}
int main(){
    char ch;
    int i, n;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        printnchar(ch, i);
}

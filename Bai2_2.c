#include <stdio.h>
typedef struct{
    char name;
    int weight;
    int value;
    int quantity;
}object;
int max(int a, int b){
    int max;
    max = a;
    if (b>a)
        max = b;
    return max;
}
int main(){
    int N, W;
    int i, j, k;
    //DOC FILE BAG.INP//
    FILE *input_file = fopen("BAG.INP", "r");
    fscanf(input_file, "%d %d", &N, &W);
    object a[N];
    int S[W+1];
    for (i = 0; i < N; i++){
        object temp;
        fscanf(input_file, "%d %d %c", &temp.weight, &temp.value, &temp.name);
        a[i] = temp;
    }
    //Khoi tao//
    for (i=0;i<=W;i++)
        S[i] = 0;
    //Thuat toan quy hoach dong//
    for (i = 0; i<=W; i++)
        for (j=0; j<N; j++)
            if (a[j].weight <= i)
                S[i] = max(S[i], S[i-a[j].weight] + a[j].value);
    printf("%d\n", S[W]); //In tong gia tri tui khi trong luong la W//
    fclose(input_file);
    return 0;
}

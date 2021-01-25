#include <stdio.h>
typedef struct{
    char name;
    int weight;
    int value;
    int quantity;
    float rating;
}object;

int main(){
    int N, W;
    int i, j, total = 0;
    FILE *input_file = fopen("BAG.INP", "r");
    fscanf(input_file, "%d %d", &N, &W);
    object a[N], tmp;
    for (i = 0; i < N; i++){
        object temp;
        fscanf(input_file, "%d %d %c", &temp.weight, &temp.value, &temp.name);
        temp.rating = (float)(temp.value) / (float)(temp.weight); //Tinh rating cua tung object//
        a[i] = temp;
    }
    //Ham sap xep object theo rating//
    for (i=0;i<N-1;i++)
        for (j=i+1;j<N;j++)
            if (a[i].rating<a[j].rating){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    for (i=0; a[i].weight; i++){
        a[i].quantity = W/a[i].weight; //so luong cua object do//
        W -= a[i].quantity * a[i].weight; //trong luong con lai cua balo//
        total += a[i].quantity * a[i].value; //tong gia tri hien tai//
    }
    //Ham sap xep object theo thu tu bang chu cai//
    for (i=0;i<N-1;i++)
        for (j=i+1;j<N;j++)
            if (a[i].name>a[j].name){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    //In ket qua//
    printf("%d\n", total);
    for(i=0;i<N;i++){
        if (!a[i].quantity)
            continue;
        printf("%c %d\n", a[i].name, a[i].quantity);
    }
    fclose(input_file);
    return 0;
}

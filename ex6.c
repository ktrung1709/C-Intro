#include<stdio.h>
void main(){
int a[3][3], b[3][3], c[3][3];
int i, j, k;

for (i=0;i<3;i++)
    for (j=0;j<3;j++){
       printf("a[%d][%d] = ",i+1,j+1);
       scanf("%d", &a[i][j]);
    }
for (i=0;i<3;i++)
    for (j=0;j<3;j++){
       printf("b[%d][%d] = ",i+1,j+1);
       scanf("%d", &b[i][j]);
    }
for(i=0; i<3; i++){
        for (j=0; j<3; j++){
            c[i][j]=0;
            for (k=0; k<3; k++)
                c[i][j]= c[i][j]+ a[i][k]*b[k][j];
}
}
printf("\nMatrix A:");
for (i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++)
        printf("%5d", a[i][j]);

}
printf("\nMatrix B:");
for (i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++)
        printf("%5d", b[i][j]);

}
printf("\nMatrix C = A * B:");
for (i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++)
        printf("%5d", c[i][j]);
}
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100
struct Student{
    char name[MAX];
    int id;
    double score;
};
typedef struct Student sinhvien;
void newentry(sinhvien *newstudent){
    printf("Name?");fflush(stdin);gets(newstudent->name);
    printf("ID?(Full format)");scanf("%d",&(newstudent->id));
    printf("Score?");scanf("%lf",&(newstudent->score));
    FILE *fpointer;
    fpointer=fopen("SV2021.dat","ab");
    fprintf(fpointer,"%s\t\t\t\t",newstudent->name);
    fprintf(fpointer,"%d\t\t\t\t",newstudent->id);
    fprintf(fpointer,"%.2lf\n",newstudent->score);
    fclose(fpointer);
    printf("Done!\n");
}
void viewlist() {
    FILE *fpointer;
    fpointer=fopen("SV2021.dat","rb");
    while(1)
    {
        char info;
        info=getc(fpointer);
        if(info==EOF) break;
        printf("%c",info);
    }
    fclose(fpointer);
}
void lookup(char name[MAX]){
    FILE *fpointer1,*fpointer2;
    fpointer1=fopen("SV2021.dat","rb");
    fpointer2=fopen("output.txt","a");
    char info[100];
    int found=0;
    fprintf(fpointer2,"Search result for %s:\n",name);
    while(fgets(info,100,fpointer1)!=NULL){
        if(strstr(info,name)!=NULL){
            printf("%s",info);
            fprintf(fpointer2,"%s",info);
            found=1;
            }
    }
    if(found==0){
        printf("Sorry, not found!\n");
        fprintf(fpointer2,"Sorry, not found!\n");
    }
    fclose(fpointer1);
    fclose(fpointer2);
}

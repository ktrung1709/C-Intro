#include <stdio.h>
typedef struct {
    char id[6];
    char name[31];
    float grade;
    char classment;
}student;
int main(){
    int i, j, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student list[n], temp;
    for(i=0; i<n; i++){
        fflush(stdin);
        printf("Enter ID: ");
        gets(list[i].id);
        printf("Enter name: ");
        gets(list[i].name);
        printf("Enter grade: ");
        scanf("%f",&list[i].grade);
        if (list[i].grade >= 9 && list[i].grade <= 10)
            list[i].classment = 'A';
        else if (list[i].grade >= 8 && list[i].grade < 9)
            list[i].classment = 'B';
        else if (list[i].grade >= 6.5 && list[i].grade < 8)
            list[i].classment = 'C';
        else
            list[i].classment = 'D';
    }
    for(i=0; i<n-1; i++)
        for (j=i+1; j<n; j++)
            if (list[i].grade < list[j].grade){
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
    printf("   ID     |          Name              | Grade | Classment\n");
    for(i=0; i<n; i++)
        printf("  %s     | %s                      | %1.1f   |   %c   \n",list[i].id,list[i].name, list[i].grade,list[i].classment);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

typedef struct {
    int day;
    int month;
    int year;
}birthday;

typedef struct {
    int id;
    char name[20];
    birthday dob;
    char class_name[15];
    char course[20];
}student;

void new_info(int n, student new_student){
    FILE *fpointer = fopen("Student.dat","a+");
    for(int i=0; i<n;i++){
        printf("Student's Name?");fflush(stdin);gets(new_student.name);
        printf("Student ID?");scanf("%d", &new_student.id);
        printf("Class Name?");fflush(stdin);gets(new_student.class_name);
        printf("Course?");gets(new_student.course);
        printf("Date of birth (DD MM YYYY): ");
        scanf("%d %d %d", &(new_student.dob.day), &(new_student.dob.month), &(new_student.dob.year));

        fprintf(fpointer,"%d\n",new_student.id);
        fprintf(fpointer,"%s\n",new_student.name);
        fprintf(fpointer,"%d/%d/%d\n",(new_student.dob.day), (new_student.dob.month), (new_student.dob.year));
        fprintf(fpointer,"%s\n",new_student.class_name);
        fprintf(fpointer,"%s\n",new_student.course);
        fprintf(fpointer,"\n");
    }
    fclose(fpointer);
    printf("Done!\n");
}

void prt_sc(){
    int i;
    FILE *fpointer = fopen("Student.dat","r");
    int count = 0;
    while(1)
    {
        char info;
        info=getc(fpointer);
        if(info=='\n') count++;
        if(info==EOF) break;
    }
    fclose(fpointer);
    int N = count/6;

    fpointer = fopen("Student.dat","r");
    char line[255];
    int id, day, month, year;
    printf("No      Student ID      Student Name                Birthday        ClassName           CourseName\n");
    for (i=0;i<N;i++){
        printf("%d       ", (i+1));
        fscanf(fpointer, "%d", &id); printf("%8d\t",id);
        fscanf(fpointer, "%s", line); printf("%-20s", line);
        fscanf(fpointer, "%d/%d/%d", &day, &month, &year); printf("%9d/%d/%d", day, month, year);
        fscanf(fpointer, "%s", line); printf("       %-15s", line);
        fscanf(fpointer, "%s", line); printf("      %-20s\n", line);
    }
    fclose(fpointer);
}

void sort(){
    int i, j;
    FILE *fpointer = fopen("Student.dat","r");
    int count = 0;
    while(1)
    {
        char info;
        info=getc(fpointer);
        if(info=='\n') count++;
        if(info==EOF) break;
    }
    fclose(fpointer);
    int N = count/6;

    student sort_student[N];
    student temp;

    fpointer = fopen("Student.dat","r");
    for (i=0; i<N;i++){
        fscanf(fpointer, "%d", &sort_student[i].id);
        fscanf(fpointer, "%s", sort_student[i].name);
        fscanf(fpointer, "%d/%d/%d", &sort_student[i].dob.day, &sort_student[i].dob.month, &sort_student[i].dob.year);
        fscanf(fpointer, "%s", sort_student[i].class_name);
        fscanf(fpointer, "%s", sort_student[i].course);
    }
    fclose(fpointer);

    for(i=0;i<N-1;i++){
        for (j=i+1;j<N;j++){
            if (sort_student[i].id > sort_student[i].id){
                temp = sort_student[i];
                sort_student[i] = sort_student[j];
                sort_student[j] = temp;
            }
        }
    }
    FILE *fpointer1 = fopen("Student2021.dat","w+");
    for (i=0;i<N;i++){
        fprintf(fpointer1, "%d\n", sort_student[i].id);
        fprintf(fpointer1, "%s\n", sort_student[i].name);
        fprintf(fpointer1, "%d/%d/%d\n", sort_student[i].dob.day, sort_student[i].dob.month, sort_student[i].dob.year);
        fprintf(fpointer1, "%s\n", sort_student[i].class_name);
        fprintf(fpointer1, "%s\n", sort_student[i].course);
        fprintf(fpointer1, "\n");
        }
    fclose(fpointer1);

    fpointer1 = fopen("Student2021.dat","r");
    char line[255];
    int id, day, month, year;
    printf("No      Student ID      Student Name                Birthday        ClassName           CourseName\n");
    for (i=0;i<N;i++){
        printf("%d     ", (i+1));
        fscanf(fpointer, "%d", &id); printf("%8d\t",id);
        fscanf(fpointer, "%s", line); printf("%-20s", line);
        fscanf(fpointer, "%d/%d/%d", &day, &month, &year); printf("%9d/%d/%d", day, month, year);
        fscanf(fpointer, "%s", line); printf("       %-15s", line);
        fscanf(fpointer, "%s", line); printf("      %-20s\n", line);
    }
    fclose(fpointer1);
}
int main() {
    while(1)
{
    printf("Student Manager\n============================================\n");
    printf("Welcome! Let's get started.\n");
    printf("Please select one of following options here:\n");
    printf("\t1.\tEnter information of students of HUST.\n");
    printf("\t2.\tPrint the information of the entered students on the screen.\n");
    printf("\t3.\tSort descending information by student ID.\n");
    printf("\t4.\tAdd a new student of HUST.\n");
    printf("\t5.\tSearch for students by student ID.\n");
    printf("\t6.\tExit.\n");
    printf("Your choice is: ");
    int i;
    scanf("%d",&i);
    switch(i){
        case 1:
        {
            int n;
            printf("Enter the number of students you want to add: ");
            scanf("%d",&n);
            student new_student;
            new_info(n, new_student);
            break;
        }
        case 2:
        {
            prt_sc();
            break;
        }
         case 3:
        {
            sort();
            break;
        }
//        case 4:
//        {
//            title_search();
//            break;
//        }
//        case 5:
//        {
//            id_search();
//            break;
//        }
        case 6:printf("Goodbye!");return 0;
    }
    printf("Press any key to continue..");
    getch();
    system("cls");
}
}

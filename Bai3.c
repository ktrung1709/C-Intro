#include"student.h"

int main() {
    while(1)
{
    printf("Student Manager\n============================================\n");
    printf("Welcome! Let's get started.\n");
    printf("Please select one of following options here:\n");
    printf("\t1.\tView student list.\n");
    printf("\t2.\tAdd a student entry.\n");
    printf("\t3.\tFind students by name.\n");
    printf("\t4.\tExit.\n");
    printf("Your choice is: ");
    int i;
    scanf("%d",&i);
    switch(i){
        case 1:
        {
            viewlist();
            break;
        }
        case 2:
        {
            sinhvien newstudent;
            newentry(&newstudent);
            break;
        }
        case 3:
        {
            char findname[MAX];
            printf("Who are you looking for?\n");
            fflush(stdin);
            gets(findname);
            lookup(findname);
            break;
        }
        case 4:printf("Goodbye!");return 0;
    }
    printf("Press any key to continue..");
    getch();
    system("cls");
}
}

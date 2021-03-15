#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100

typedef struct {
    char name[40];
    int student;
    int lecturer;
    int phd;
    float spl;
}school_t;
char *shortcut(char name[]){
    int i, j;
    char temp[40];
    int count = 0;
    for (i = 0; name[i]!= '\0';i++)
        if (name[i]==' ')
            count++;
    temp[0]=name[0];
    for (j=1;j<count+1;j++)
        for (i=0; name[i]!='\0';i++)
            if(name[i]==' '){
                temp[j] = name[i+1];
                name[i]='a';
                break;
            }
    return strcpy(name, temp);
}
void nhaplieu(int n, int count, int total_SV, int total_GV, int total_TS, school_t school[]){
    int i;
    int stt = 1;
    for (i=count;i<n+count;i++){
        printf("Nhap lieu cho vien thu %d:\n", i+1);
        printf("Ten vien: "); fflush(stdin); gets(school[i].name);
        printf("Tong so SV: "); scanf("%d", &school[i].student);
        while (school[i].student<0){
            printf("So SV khong hop le. Vui long nhap lai: \n");
            scanf("%d", &school[i].student);
        }
        total_SV += school[i].student;

        printf("Tong so GV: "); scanf("%d", &school[i].lecturer);
        while (school[i].lecturer<0){
            printf("So GV khong hop le. Vui long nhap lai: \n");
            scanf("%d", &school[i].lecturer);
        }
        total_GV += school[i].lecturer;

        printf("Tong so TS: "); scanf("%d", &school[i].phd);
        while (school[i].phd<0 || school[i].phd > school[i].lecturer){
            printf("So TS khong hop le. Vui long nhap lai: \n");
            scanf("%d", &school[i].phd);
        }
        total_TS += school[i].phd;

        school[i].spl = (float)(school[i].student)/(float)(school[i].lecturer);
    }
        printf("\n\nBang thong tin\n");
        printf("STT         Vien                                So SV     So GV    So TS   Ty le\n");
        for(i=0;i<n+count;i++)
            if(school[i].student != 0){
            printf(" %d  %-40s %8d %8d %8d %8.2f\n",stt,school[i].name,school[i].student,school[i].lecturer,school[i].phd,school[i].spl);
            stt++;
            }
        printf("\n");
        printf("Toan truong                                  %8d %8d %8d %8.2f\n", total_SV, total_GV, total_TS, (float)(total_SV)/(float)(total_GV));

}

void prt_sc(int count, int total_SV, int total_GV, int total_TS, school_t school[]){
    int i = 0;
    int stt = 1;
    for (i=0;i<count;i++){
        total_SV += school[i].student;
        total_GV += school[i].lecturer;
        total_TS += school[i].phd;
    }
    printf("\n\nBang thong tin\n");
    printf("STT         Vien                                So SV     So GV    So TS   Ty le\n");
    for(i=0;i<count;i++)
        if(school[i].student != 0){
            printf(" %d  %-40s %8d %8d %8d %8.2f\n",stt,school[i].name,school[i].student,school[i].lecturer,school[i].phd,school[i].spl);
            stt++;
            }
    printf("\n");
    printf("Toan truong                                  %8d %8d %8d %8.2f\n", total_SV, total_GV, total_TS, (float)(total_SV)/(float)(total_GV));
}

void viettat(int count, school_t school[]){
    int i;
    for (i=0;i< count; i++){
        if (strlen(school[i].name)<=10)
            continue;
        else
            *school[i].name = *shortcut(school[i].name);
    }
    printf("Da viet tat ten cac vien tren 10 ki tu\n");
}

void xoavien(char search[], int count, school_t school[]){
    int i, m = 0;
    for (i=0;i<count;i++)
        if (strcmp(search, school[i].name)==0){
            school[i].name[0] = '\0';
            school[i].student = 0;
            school[i].lecturer = 0;
            school[i].phd = 0;
            school[i].spl = 0;
            m++;
        }
    if (m==0)
        printf("Khong tim thay vien\n");
    else
        printf("Da xoa vien thanh cong\n");
}

void sort (int count, school_t school[]){
    int i, j;
    int stt = 1;
    school_t temp;
    for (i=0;i<count-1;i++)
        for (j=i+1;j<count;j++)
            if (school[i].student < school[j].student){
                temp = school[i];
                school[i] = school[j];
                school[j] = temp;
            }
    printf("\n\nBang thong tin\n");
    printf("STT         Vien                                So SV     So GV    So TS   Ty le\n");
    for(i=0;i<count;i++)
        if(school[i].student != 0){
            printf(" %d  %-40s %8d %8d %8d %8.2f\n",stt,school[i].name,school[i].student,school[i].lecturer,school[i].phd,school[i].spl);
            stt++;
            }
}

int main(){
    school_t school[MAX];
    int count = 0;
    int total_SV = 0;
    int total_GV = 0;
    int total_TS = 0;
    while (1){
        printf("Chuong trinh quan li hoc sinh\n============================================\n");
        printf("Chon 1 trong cac chuc nang sau:\n");
        printf("\t1.\tNhap thong tin cac vien.\n");
        printf("\t2.\tHien thi bang thong tin.\n");
        printf("\t3.\tViet tat ten cac vien.\n");
        printf("\t4.\tXoa vien.\n");
        printf("\t5.\tSap xep.\n");
        printf("\t6.\tThoat.\n");
        printf("Chuc nang ban chon la: ");
        int i, n;
        scanf("%d",&i);
        switch(i){
            case 1:
            {
                printf("Nhap so vien ban muon them thong tin: ");
                scanf("%d", &n);
                while(n <= 0 || n > MAX){
                    printf("\nSo Vien khong hop le. Vui long nhap lai: ");
                    scanf("%d", &n);
                }
                nhaplieu(n, count, total_SV, total_GV, total_TS, school);
                count += n;
                break;
            }
            case 2:
            {
                prt_sc(count, total_SV, total_GV, total_TS, school);
                break;
            }
            case 3:
            {
                viettat(count, school);
                break;
            }
            case 4:
            {
                char search[40];
                printf("Nhap vien can xoa: "); fflush(stdin); gets(search);
                xoavien(search, count, school);
                break;
            }
            case 5:
            {
                sort(count, school);
                break;
            }
            case 6:
            {
                printf("Tam biet!!!\n");
                return 0;
            }
        }
        printf("Press any key to continue..");
        getch();
        system("cls");
    }
}

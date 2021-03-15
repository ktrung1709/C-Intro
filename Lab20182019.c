#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<string.h>
#define MAX 100
typedef struct{
    char name[30];
    char id[12];
    char home_town[30];
    double gpa;
}sinhvien;

void nhaplieu(int n, int count, sinhvien sv_list[]){
    int i;
    for (i=count;i<n+count;i++){
        printf("Ten sinh vien: "); fflush(stdin); gets(sv_list[i].name);
        printf("MSSV: "); fflush(stdin); gets(sv_list[i].id);
        printf("Que quan: "); fflush(stdin); gets(sv_list[i].home_town);
        printf("GPA: "); fflush(stdin); scanf("%lf", &sv_list[i].gpa);
        while (sv_list[i].gpa < 0 || sv_list[i].gpa > 4){
            printf("GPA khong hop le. Vui long nhap lai: ");
            scanf("%lf", &sv_list[i].gpa);
        }
        printf("\n");
    }
}

void thongtin(int count, sinhvien sv_list[]){
    int i;
    double total = 0;
    printf("STT           Ten                        MSSV           Que quan                        GPA   \n");
    for (i = 0;i < count;i++){
        printf("%d\t", i+1);
        printf("%-30s\t", sv_list[i].name);
        printf("%-12s\t", sv_list[i].id);
        printf("%-30s\t", sv_list[i].home_town);
        printf("%.1lf\n", sv_list[i].gpa);
        total = total + sv_list[i].gpa;
    }
    printf("\nDiem GPA trung binh tat ca sinh vien: %.2f\n", total/count);
}

void tim_mssv(int count, char search[], sinhvien sv_list[]){
    int i, m=0 ;
    for (i=0;i<count;i++)
        if (strcmp(search, sv_list[i].id)==0){
            printf("%-30s\t", sv_list[i].name);
            printf("%-12s\t", sv_list[i].id);
            printf("%-30s\t", sv_list[i].home_town);
            printf("%.1lf\n", sv_list[i].gpa);
            m++;
        }
    if (m==0)
        printf("Khong tim thay sinh vien\n");
}

void tim_gpa_quequan(int count, char search[], sinhvien sv_list[]){
    int i, m=0 ;
    double total = 0;
    for (i=0;i<count;i++)
        total = total + sv_list[i].gpa;
    printf("GPA trung binh la: %.2f\n", total/count);
    for (i=0;i<count;i++)
        if (strcasecmp(search, sv_list[i].home_town)==0 && sv_list[i].gpa > (total/count)){
            printf("%-30s\t", sv_list[i].name);
            printf("%-12s\t", sv_list[i].id);
            printf("%-30s\t", sv_list[i].home_town);
            printf("%.1lf\n", sv_list[i].gpa);
            m++;
        }
    if (m==0)
        printf("Khong tim thay sinh vien\n");
}

void sapxep(int count, sinhvien sv_list[]){
    int i,j;
    double total = 0;
    sinhvien temp;
    for (i=0;i<count-1;i++)
        for (j=i+1;j<count;j++)
            if (sv_list[i].gpa < sv_list[j].gpa){
                temp = sv_list[i];
                sv_list[i] = sv_list [j];
                sv_list[j] = temp;
            }
    printf("STT           Ten                        MSSV           Que quan                        GPA   \n");
    for (i = 0;i < count;i++){
        printf("%d\t", i+1);
        printf("%-30s\t", sv_list[i].name);
        printf("%-12s\t", sv_list[i].id);
        printf("%-30s\t", sv_list[i].home_town);
        printf("%.1lf\n", sv_list[i].gpa);
        total = total + sv_list[i].gpa;
    }
    printf("\nDiem GPA trung binh tat ca sinh vien: %.2f\n", total/count);
}

int main(){
    int j;
    int count = 0;
    sinhvien sv_list[MAX];
    for (j=0;j<MAX;j++)
        sv_list[j].gpa = -1;
    while(1){
        printf("Chuong trinh quan li hoc sinh\n============================================\n");
        printf("Chon 1 trong cac chuc nang sau:\n");
        printf("\t1.\tNhap thong tin sinh vien.\n");
        printf("\t2.\tIn thong tin cac sinh vien.\n");
        printf("\t3.\tTim SV theo MSSV.\n");
        printf("\t4.\tTim SV theo GPA va que quan.\n");
        printf("\t5.\tSap xep.\n");
        printf("\t6.\tThoat.\n");
        printf("Chuc nang ban chon la: ");
        int i, n;
        scanf("%d",&i);
        switch(i){
            case 1:
            {
                printf("So luong SV moi can nhap: "); scanf("%d",&n);
                while (n<1){
                    printf("So SV khong hop le. Vui long nhap lai: ");
                    scanf("%d", &n);
                }
                nhaplieu(n, count, sv_list);
                count = count + n;
                break;
            }
            case 2:
            {
                thongtin(count, sv_list);
                break;
            }
            case 3:
            {
                char search[12];
                printf("Nhap MSSV can tim: "); fflush(stdin); gets(search);
                tim_mssv(count, search, sv_list);
                break;
            }
            case 4:
            {
                char search[30];
                printf("Nhap que quan SV can tim: "); fflush(stdin); gets(search);
                tim_gpa_quequan(count, search, sv_list);
                break;
            }
            case 5:
            {
                sapxep(count, sv_list);
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

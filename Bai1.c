#include <stdio.h>
unsigned long long int combination(unsigned long long int n,unsigned long long int k)
{
    if (k==0||k==n)
        return 1;
    if (k==1)
        return n;
    int result=combination(n-1,k)+combination(n-1,k-1);
    return result;
}
int countline(const char *file_path)
{
    char buff[500];
    FILE *f = fopen(file_path, "r");
    if (f == NULL) {
        printf("Error: Cannot open file.\n");
        return -1;
    }
    int line_num=0;
    while (fgets(buff, 500, (FILE*)f)) {
        line_num++;
    }
    fclose(f);
    return line_num;
}
int main() {
    int linenumber = countline("TOHOP.INP");
    FILE *fptr1,*fptr2;
    fptr1 = fopen("TOHOP.INP","r");
    fptr2 = fopen("TOHOP.OUT","w");
    unsigned long long int n,k;
    for( int i=0; i<linenumber; i++ )
    {
        fscanf(fptr1,"%llu%llu",&n,&k);
        fprintf(fptr2,"%llu\n",combination(n,k));
    }
    return 0;
}

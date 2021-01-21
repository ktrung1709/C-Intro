int max = 0, temp = 0;
for (i=0; i<n; i++){
    if (a[i] == 0)
        temp++;
    if (a[i] != 0){
        if (temp>max){
             max = temp;
             temp = 0;
        }
    }
}
printf("The length of the longest subsequence that consists all zero is %d\n", max);

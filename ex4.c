#include<stdio.h>
#include<math.h>
int main()
{
  int i, j, count;

  for(j=2; j<=100; j++){
    count = 0;
    if(j==2||j==3)
    {printf("%d\n",j);
    continue;}
    for(i=2; i<=sqrt(j);i++){
    	if(j%i==0)
    	{count++;}}
    	if (count==0){
    		printf("%d\n",j);}
    		}}

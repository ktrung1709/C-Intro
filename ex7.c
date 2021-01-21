#include <stdio.h>
int main()
{
  float grade, sum = 0.0;
  int count = 0, b = 0;
  do {
  printf("Enter grade: ");
  scanf("%f", &grade);
  if (grade < 0.0) {b=1;
  continue;} 
    count++;
    sum += grade;} while (b==0);
  printf("Average: %f\n", sum/count);
  return 0;
} 

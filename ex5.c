#include <stdio.h>
int main(void)
{
  int passes = 0;
  int failures = 0;
  int student = 1;
  int result;

  while (student <= 10){
    printf("Enter result (1 = pass, 2 = fail): ");
    scanf("%d", &result);
    if (result == 1)
      passes++;
    else
      failures++;
    student++;}
  printf("Passes %d\n", passes);
  printf("Failed %d\n", failures);
  return 0;
}

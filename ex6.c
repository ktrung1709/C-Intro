#include <stdio.h>
int main(void)
{
  int x, a = 1;
  printf("Enter a number: ");
  scanf("%d", &x);
  do {
    printf("%d\n", a);
  } while (++a < x);
  return 0;
}

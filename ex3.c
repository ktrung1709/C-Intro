#include <stdio.h>
int main()
{
  int i, count;

  for(i=1, count=0; i<=100; i=i+1)
    if(i>27)
      count = count + 1;
  printf("%d numbers were greater than 27\n", count);
}

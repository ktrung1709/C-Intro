#include <stdio.h>
#define cbegin 10
#define climit -5
#define cstep 1

int main()
{
  int celsius;
  double fahrenheit;

  printf("Celsius Fahrenheit\n");
  for (celsius = cbegin; celsius >= climit; celsius = celsius - cstep){
    fahrenheit = 1.8 * celsius + 32.0;
    printf(" %3d %7.2f\n", celsius, fahrenheit);}
}

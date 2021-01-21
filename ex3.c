#include <stdio.h>
#include <math.h>
void main()
{
  double a, x, ketqua;
  printf("\n Enter a number: ");
  scanf("%lf", &a);
  x = (a+1)/2;

  do {
    ketqua = x;
    x = 0.5 * (x + a/x);
  } while (fabs(x - ketqua) > 0.0001);
  printf("\nResult = %lf\n", x);
}

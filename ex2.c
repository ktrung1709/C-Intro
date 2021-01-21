#include <stdio.h>
int main()
{
  int c,d;

  while ((c = getchar()) != EOF)
    {
      d = 0;
      if(c == '\t')
	{
	  putchar('\\');
	  putchar('\\');
	  d = 1;
	}
      if(c == '\b')
	{
	  putchar('\\');
	  putchar('\\');
	  d = 1;
	}
      if(d == 0)
	putchar(c);
    }
  return 0;
}

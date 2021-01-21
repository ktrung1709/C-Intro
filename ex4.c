#include <stdio.h>
int main(void)
{
  double totalpay, hours, rate, pay;
  int cur_emp, number_emp;

  printf("Enter the number of employees: ");
  scanf("%d", &number_emp);

  totalpay = 0.0;
  cur_emp = 0;
  
  while (cur_emp < number_emp){
  	printf("Hours: ");
  	scanf("%lf", &hours);
  	printf("Rate: ");
  	scanf("%lf", &rate);
  	pay = hours * rate;
  	printf("Pay is %6.2f$\n\n", pay);
  	totalpay= totalpay + pay;
  	cur_emp = cur_emp + 1;
  }
  printf("All employees processed\n");
  printf("Total payroll is %8.2f$\n", totalpay);
  return 0;
}	

#include<stdio.h>
#include<stdlib.h>
double kineticEnergy(double m, double v){
return m*v*v/2;
}
void main(){
double m, v;
printf("Enter the mass (>0): "); scanf("%lf", &m);
printf("Enter the speed (>0): "); scanf("%lf", &v);
printf("The kinetic energy is %f\n", kineticEnergy(m,v));
}

//Write a function power(n,m), to calculate the value of n raised to m.
#include <stdio.h>
double POWER();

double main()
{  double a,b;
printf(" n ^m  Enter Your value of n and you m : ");
    scanf("%lf %lf",&a,&b);
printf("power(%.0lf ,%0.lf) = %.2lf\n",a,b,POWER(a,b));



}
double POWER(double a ,double b)
{
double c=1 ;
for(int d=1;d<=b;d++)
{
    c=c*a;
}

return c;
}

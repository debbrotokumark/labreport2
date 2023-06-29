//without argument with return type

#include <stdio.h>

double addn()
{
     double  a,b ;
    scanf("%lf %lf",&a,&b);
    return a+b;


}
double main() {

printf("Enter Your Two Number : ");
printf("Add Two Number :  %.3lf",addn());
return 0;
}

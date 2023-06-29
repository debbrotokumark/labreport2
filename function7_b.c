//b) with argument without return type
#include <stdio.h>
void addn(double a,double b)
{
   printf("Add Two Number :  %.3lf",a+b);
}
int main() {
double a,b;
printf("Enter Your Two Number : ");
scanf("%lf %lf",&a,&b);
addn(a,b);

}

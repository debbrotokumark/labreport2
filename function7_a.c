//a with argument with return type
#include <stdio.h>
double addn(double a,double b)
{
    return a+b;

}
int main() {
double a,b;
printf("Enter Your Two Number : ");
scanf("%lf %lf",&a,&b);
printf("Add Two Number :  %.3lf",addn(a,b));
    return 0;
}

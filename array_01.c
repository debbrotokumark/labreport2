//Compute sum of elements of an array in a program?
#include<stdio.h>
int main(){
double  a[1000];
double sum=0, b,c;
printf("Enter Your Array Size : ");
scanf("%lf",&b);
printf("Enter Your Array Element : ");
for(int d=0;d<b;d++)
{
scanf("%lf",&a[d]);
sum+=a[d];
}
printf("Your Array  : { ");
for(int d=0;d<b;d++)
{  printf(" %.2lf ",a[d]);

}
printf("}\nSum of Array : %.3lf\n",sum);
return 0;
}



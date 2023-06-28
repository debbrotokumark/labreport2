/*
19. If three sides of a triangle are p, q and r respectively, then area of triangle is given by
area = (S(S-p)(S-q)(S-r))1/2, where S = (p+q+r)/2.
*/
#include <stdio.h>

double area(double p,double q,double r){


double s=(p+q+r)/2.0;

s=(s*(s-p)*(s-q)*(s-r));
if(s<=0)
    return 0;
return sqrt(s);
}

int main() {
printf("Enter Value of p q r : ");
double p,q,r;
scanf("%lf %lf %lf",&p,&q,&r);
//p=6,q=8,r=10;
float ar=area(p,q,r);
printf("Triangle is given by area : %.3lf",ar);
    return 0;
}

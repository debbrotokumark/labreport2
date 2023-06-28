//13  Write a function which receives a float and a int from main(), finds the product of these
//two and returns the product which is printed through main().
#include<stdio.h>
float product(int a,float b){
return a*b;
}


int main()
{
 int a;
 float b;
 printf("Enter your int and float Value : ");
scanf("%d %f",&a,&b);
float c=product(a,b);
printf("%.3lf",c);
return 0;
}


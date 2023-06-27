//Write a function that inputs a number and prints the multiplication table of that number. 

#include <stdio.h>
int mul();

int main()
{ int a;
    scanf("%d",&a);

 mul(a);

}

int mul(int a){

 int b;
 for(b=1;b<=10;b++)
{
    printf("%2d x %2d = %2d\n",a,b,a*b);


}

}

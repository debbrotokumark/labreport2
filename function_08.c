
//Write a program using function to calculate the factorial of a number entered through the keyboard.


#include <stdio.h>
int fact();

int main()
{ int a;
    scanf("%d",&a);

    printf("Factorial of %d a number : %d \n",a,fact(a));

}
int fact(int a){
int b,c=1;
for(b=1;b<=a;b++)
c=b*c;
return c;
}

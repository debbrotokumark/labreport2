//A year is entered by the user through keyboard. Write a function to determine whether the year is a leap year or not


#include <stdio.h>
int fact();

int main()
{ int a;
    scanf("%d",&a);

 fact(a);

}

int fact(int a){

 if(a%4==0 && a%100!=0 || a%400==0)
 printf("Leap Year \n");

else
 printf("Not Leap Year \n");

}

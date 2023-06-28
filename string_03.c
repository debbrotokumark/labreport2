//Writ a program to convert string to an integer?
#include<stdio.h>

int main(){

char a[1000];
scanf("%s",a);
/*
long long int d=0;
for(int c=0;a[c]!='\0';c++)
{
   d=d*10+(int)(a[c]-'0');
}
 printf("%lld",d);

 */
 printf("%lld",atoi(a));
return 0;
}



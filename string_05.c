//Write a program to read a word and re-write its characters in alphabetical order.


#include <stdio.h>
int main()
{
char a[1000];
scanf("%s",a);
int i,j,b,c;

b=strlen(a);


for(i=0;i<b-1;i++)
{
    for(j=0;j<b-1;j++)
    {
        if(a[j]>a[j+1])
        {
            char t=a[j];;
            a[j]=a[j+1];
            a[j+1]=t;

        }
    }

}

printf("%s",a);



}

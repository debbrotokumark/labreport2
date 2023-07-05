//Sorting an array with bubble sort?


#include <stdio.h>
int main()
{
int a[]={2,3,4,5,3,5,6,7};
//gets(a);
int i,j,b,c;
b=sizeof(a)/sizeof(0);

for(i=0;i<b-1;i++)
{
    for(j=0;j<=b-1;j++)
    {
        if(a[j]>a[j+1])
        {
            int t=a[j];;
            a[j]=a[j+1];
            a[j+1]=t;

        }
    }

}
for(i=0;i<b;i++)
{
printf("%d  ",a[i]);
}

}

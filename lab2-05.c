#include<stdio.h>

int deb(int n,int a){
    int c=1,sum=1;
for(int b=1;b<=n;b++)
{
    c=c*a;
    sum=sum+c;

}
return sum;

}



int main()
{
    printf("Enter Value of n and x  ");
int a,n;
scanf("%d %d",&n,&a);

printf("%d\n",deb(n-1,a));


    return 0;
}

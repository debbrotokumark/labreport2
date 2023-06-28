//Write function to calculate the sum of digits of a number entered by the user.
#include <stdio.h>
int sum(long long int a)
{
int b=0,c;
while(a!=0)
{
    c=a%10;
    b+=c;
    a/=10;
}
return b;
}

int main() {
    long long int a;
    printf("Enter your Number : ");
    scanf("%lld",&a);
    int su=sum(a);
    printf("Sum of digit : %d\n",su);

    return 0;
}

//Write a function to find GCD and LCM of two numbers.
#include<stdio.h>


gcd(int a,int b){
if(b==0)
    return a;
   else if(a==0)
    return b;
else return gcd(a,a%b) ;
}
int lcm(int a, int b) {
if(b==0)
    return a;
   else if(a==0)
    return b;
    else
    return (a * b) / gcd(a, b);
}

int main(){
printf("Enter Your Two Number ");
int a,b;
scanf("%d %d",&a,&b);

printf("GCD : %d\n",gcd(a,b));
printf("LCM : %d",lcm(a,b));


}







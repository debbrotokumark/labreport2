//Write a program to interchange the largest and the smallest number in the array.
#include<stdio.h>
int main(){
    int a[10]={2,10,17,21,34,44,58,69,89,100};
int b,c=a[0],d=a[0],c1,d1;
for(int b=0;b<10;b++){
  if(c<=a[b]){
    c=a[b];
  c1=b;
  }
   if(d>=a[b]){
    d=a[b];
    d1=b;

   }
}
a[c1]=d;
a[d1]=c;

for(int b=0;b<10;b++)
    printf("%d ",a[b]);

}







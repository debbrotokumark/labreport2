
//Write a program for binary search using an array?
#include<stdio.h>
int main(){
    int a[10]={2,10,17,21,34,44,58,69,89,100};
int left=0,right=10,midle,check=100;
while(left<=right){
    midle= (left+right)/2;
    if(a[midle]==check){
                    printf("index number %d %d \n",midle,check);
    return 0;
    }
        else if(a[midle]<check)
        {
            left=midle+1;
        }
        else right=midle-1;

    }

printf("not found");

}







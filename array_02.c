//Write a program for histogram printing using an array?
#include<stdio.h>
int main(){
    int a[5]={4,3,7,5,2};
    printf("Histogram \n");
    for(int i=0;i<5;i++)
    {  printf("ITEM %d ",i+1);
        for(int j=0;j<a[i];j++)
            printf("#");

            printf("\n");

    }
}




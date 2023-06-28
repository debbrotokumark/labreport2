/*Write a program to define a union and a structure both having exactly the same members.
Using the sizeof operator, print the size of structure variable as well as union variable and
comment on the result.*/
#include<stdio.h>
union uni {
int a;
char b;
double c;
};
struct str{
int a;
char b;
double c;

};

int main(){

    union uni uni;
    struct str str;
    printf("Size of Union : %d\n",sizeof(uni));
        printf("Size of Struct : %d\n",sizeof(str));


return 0;
}



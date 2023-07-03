//Write a program to count the number of characters, words and lines in the given text
#include<stdio.h>
int main(){
char text[] = "Hello, world!\nHow are you?\nI hope you're doing well.";
long long int c,d=1,e=1;
for(c=0;text[c]!='\0';c++){}
 printf("Total char :  %lld\n",c);
for(c=0;text[c]!='\0';c++){
if(text[c]==' ' || text[c]=='\t' || text[c]=='\n')
 d++;
}
 printf("Total word :  %lld\n",d);
 for(c=0;text[c]!='\0';c++){
 if(text[c]=='\n')
        e++;
 }
  printf("Total line :  %lld\n",e);
}





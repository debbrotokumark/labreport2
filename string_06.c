//Write a program to insert a word before a given word in the text.
#include <stdio.h>

int main() {

    char *tok,text[]="Hello world , how are you debbroto?";
    char inser[]="my";
    char  target[]="world";
 char result[100000];
    tok=strtok(text," ");
   while(tok!='\0')
  {
      if(strcmp(tok,target)==0){
      strcat(result,inser);
      strcat(result," ");
      }
      strcat(result,tok);
      strcat(result," ");
      tok=strtok(NULL," ");

  }
  printf("%s",result);

}










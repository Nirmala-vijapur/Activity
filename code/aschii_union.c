#include<stdio.h>
#include<string.h>
#include"stdint.h"
#define size 100
union my_char
{
    char ch;
    uint8_t integer;
};
int main()
{
   union my_char t;
   char name[size];
   int sum=0;
   printf("Enter the name:");
   scanf("%s",name);
   int i=0;
   while(name[i]!='\0')
   {
      t.integer=name[i];
      printf("value:%x\n",t.integer);
      i++;
   }
   for(int j=0;j<strlen(name);j++)
   {
     sum=sum+name[j];
    }
   printf("sum:%x",sum);
   return 0;
}
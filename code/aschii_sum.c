#include<stdio.h>
#include<string.h>
int main() {
   char name[50];
   int i=0;
   int sum =0;
   printf("Enter the name: \n");
   scanf("%s",name);
   while(name[i]!='\0') {
      printf("\nASCII Value of %c=%x\n", name[i], name[i]);
      sum = sum + name[i];
      i++;
   }
   printf("sum of name is %x\n",sum);
   return 0;
}
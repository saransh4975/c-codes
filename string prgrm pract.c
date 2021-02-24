#include<stdio.h>
void main()
{
    char name[20];
    int len=0;
    printf("enter your name\n");
    scanf("%[^\n]",&name);
    printf("my name is %s\n",name);

   while(name[20]=len !='\0')
   {
       len++;

   }
    printf("len is %d",len);
    }

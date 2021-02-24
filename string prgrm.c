#include<stdio.h>
void main()
{
    char name[20];
    int len = 0;

     printf("enter your name\n");
     scanf("%[^\n]",&name);

     printf("my name is %s",name);

     while(name[len] != '\0'){
        len++;
     }

     printf("lenght of my name is %d",len);

}

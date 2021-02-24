#include<stdio.h>
void main()
{

  char name[20];
  int len;



    printf("enter name\n");
    scanf("%[^\n]",&name);

    len=strlen(name);
    printf("length of your name is %d",len);
}

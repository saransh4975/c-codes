#include<stdio.h>
void main()
{
    char fname[10];

    char lname[10];

    printf("enter name\n");
    scanf("%s",&fname);
     printf("enter name\n");
     scanf("%s",&lname);
    strcpy(fname,lname);
    printf("%s",fname);
}

#include<stdio.h>
void main()
{
    int marks[3],total;


    for(int i=0; i<=2; i++)
    {
        printf("enter your number");
        scanf("%d",&marks[i]);
        total=total+marks[i];
    }
    for(int j=0; j<=2; j++)
    {

        printf("marks %d\n",marks[j]);
    }
    printf("total %d",total);
}

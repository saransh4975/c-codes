#include<stdio.h>
void main()
{
    int a,b;


    printf("enter your num1");
    scanf("%d",&a);
    printf("enter your num2");
    scanf("%d",&b);
int i,j;
    for(i=1; i<=a; i++)
    {
        for(j=1; j<=b; j++)
        {
            printf("%d %d\n",i,j);
            printf("\n");
        }
    }

}

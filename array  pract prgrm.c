#include<stdio.h>
void main()
{
    int marks[3],totall;
for (int i=0;i<3;i++)
{
    printf("enter your number");
    scanf("%d",&marks[i]);

    totall=totall+marks[i];
}
    for(int j=0;j<3;j++)
      {

        printf("marks %d\n",marks[j]);

      }
printf("totall %d",totall);
}

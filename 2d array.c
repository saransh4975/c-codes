#include<stdio.h>
void main()
{
    int marks[2][3],totall[2];

    for(int i=0; i<2; i++)
    {
        totall[i]=0;
        for(int j=0; j<3; j++)
        {

            printf("enter your marks:");
            scanf("%d",&marks[i][j]);


            totall[i]= totall[i]+marks[i][j];
        }
        printf("\n");
    }

}

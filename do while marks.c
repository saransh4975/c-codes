#include<stdio.h>
void main()
{

    int maths,english,science;
    int total;
    float average;


    do
    {
        printf("enter your maths marks");
        scanf("%d",&maths);


    }
    while(maths>100||maths<0);

    do
    {
        printf("enter your english marks");
        scanf("%d",&english);
    }
    while(english>100||english<0);

    do
    {
        printf("enter your science marks ");
        scanf("%d",&science);
    }while(science>100||science<0);

     total=maths+english+science;
     average=total/3;
     printf("\n your total is %d",total);
     printf("\n average is %f",average);

    if(average>80)
    {
        printf("grade is  A");
    }
    else if(average>70)
    {
        printf("grade is B");

    }

    else  if (average>55)
    {

        printf("grade is C");

    }
    else{
        printf("fail");

    }



}


#include<stdio.h>
void main()
{

    int english,maths,science;
    int total;
    float average;


    do
    {
        printf("enter your marks");
        scanf("%d"&english);


    }while(english<100||english>0);

    do
    {
     printf("enter your marks");
     scanf("%d",&maths);


    }while(maths>100||maths<0);


    do
    {
        printf("enter your marks");
        scanf("%d",&science);

    }while(science>100||science<0);

    totall=english+maths+science;
    averaege=totall/3;
    printf("your toatal is %d"total);
    printf("\n%average is %f"average);



    if(average>80)
    {

    printf("grade A");
    }
    else if (average>75);{
      printf("grade B");
}
     else if (average>50);
    {

    printf("grade c");

    }
    else{
        printf("fail");

    }

}

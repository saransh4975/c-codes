#include<stdio.h>
void main()
{
    char yesno='y';
    while(yesno=='Y'||yesno=='y')
    {
        int num1,num2,ans;
        char ch;
        printf("enter your first number");
        scanf("%d",&num1);
        printf("enter your second number");
        scanf("%d",&num2);
        printf("choose operation (+,-,*,/)");
        fflush(stdin);
        scanf("%c",&ch);

        if(ch=='+')
        {
            ans = num1+num2;
            printf("Addition is %d",ans);
        }

        else if(ch=='-')
        {
            printf("Subtraction is %d",(num1-num2));

        }
        else if(ch=='*')
        {
            printf("multiplication is %d",(num1*num2));
        }

        else if(ch=='/')
        {
            printf("division is %d",(num1/num2));
        }
        else
        {
            printf("Invalid");
        }
        printf("press y to continue");
        fflush(stdin);
        scanf("%c",&yesno);
    }
}

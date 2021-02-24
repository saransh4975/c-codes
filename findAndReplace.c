#include<stdio.h>

void main()
{
    char data[20];
    char fdata,rdata;
    int len=0;
/// akshay   a  ->  A

    printf("Enter Name\n");
    scanf("%[^\n]",&data);

    printf("What to find ?\n");
    fflush(stdin);
    scanf("%c",&fdata);

    printf("Replace with...\n");
    fflush(stdin);
    scanf("%c",&rdata);

    while(data[len]!='\0')
    {
        len++;
    }

    for(int i=0; i<len; i++)
    {
        if(data[i] == fdata)
        {
            data[i] = rdata;
        }
    }


    printf("%s",data);

}

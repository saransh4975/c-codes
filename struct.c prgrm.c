#include<stdio.h>
#include<string.h>
struct Employ
{
    int id;
    char name[10],post[10];
    float salary;
};
void main()
{    struct Employ s[3];

    for(int i=0; i<3; i++)
    {
        printf("Enter name\n");
        fflush(stdin);
        scanf("%[^\n]",&s[i].name);

        printf("Enter id.\n");
        fflush(stdin);
        scanf("%d",&s[i].id);

        printf("Enter post .\n");
        fflush(stdin);
        scanf("%[^\n]",&s[i].post);

        printf("Enter salary.\n");
        fflush(stdin);
        scanf("%f",&s[i].salary);

    }

    for(int i=0; i<=2; i++)
    {
        printf("Name : %s ID %d  post %s salary %f\n",s[i].name,s[i].id,s[i].post,s[i].salary);
    }

    int tempId;
    printf("Enter the id of student to find");
    scanf("%d",&tempId);

    printf("Name : %s id %d  post %s salary %f\n",s[tempId].name,s[tempId].id,s[tempId].post,s[tempId].salary);

}



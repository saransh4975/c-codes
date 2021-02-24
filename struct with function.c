#include<stdio.h>
#include<string.h>
struct employ
{
    int id;
    char name[20];
    float salary;
};

void setdata(struct employ a[])
{
    for(int i=0; i<3; i++)
    {
        printf("enter name\n");
        scanf("%[^\n]",&a[i].name);
        printf("enetr salary\n");
        scanf("%f",&a[i].salary);
        printf("enter id");
        scanf("%d",&a[i].id);

    }


}
void display(struct employ a[])
{
    for(int i=0; i<3; i++)
    {
        printf("name %c salary %f id %d\n",a[i].name,a[i].salary,a[i].id);
    }
}
void findemploy(struct employ a[])
{
    int tempid,flag=0;
    printf("enter id to find empoly");
    scanf("%d",&tempid);
    for(int i=0; i<3; i++)
    {
        if (a[i].id == tempid)
        {
            flag=1;
            printf("name:-%s id:-%d salary:-%f\n",a[i].name,a[i].id,a[i].salary,a[i].id );
        }
    }
    if (flag=0){


    printf("no employ find");
    }

}
   void main()
   {
       struct employ s[3];
       setdata(s);
       display(s);
       findemploy(s);
   }


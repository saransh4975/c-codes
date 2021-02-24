#include<stdio.h>
#include<string.h>
struct student{
int rollNo,standard;
char name[10],section;
};
void main(){
struct student s[3];

for(int i=0; i<3; i++){
printf("Enter name\n");
fflush(stdin);
scanf("%[^\n]",&s[i].name);

printf("Enter roll No.\n");
scanf("%d",&s[i].rollNo);

printf("Enter standard.\n");
scanf("%d",&s[i].standard);

printf("Enter section.\n");
fflush(stdin);
scanf("%c",&s[i].section);
}

for(int i=0; i<=2; i++){
printf("Name : %s RollNo %d  Standard %d Section %c\n",s[i].name,s[i].rollNo,s[i].standard,s[i].section);
}

int tempId;
printf("Enter the id of student to find");
scanf("%d",&tempId);

printf("Name : %s RollNo %d  Standard %d Section %c\n",s[tempId].name,s[tempId].rollNo,s[tempId].standard,s[tempId].section);

}


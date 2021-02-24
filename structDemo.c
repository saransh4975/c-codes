#include<stdio.h>
#include<string.h>
struct student{
int rollNo,standard;
char name[10],section;
};
void main(){
struct student s;

printf("Enter name\n");
scanf("%[^\n]",&s.name);

printf("Enter roll No.\n");
scanf("%d",&s.rollNo);

printf("Enter standard.\n");
scanf("%d",&s.standard);

printf("Enter section.\n");
fflush(stdin);
scanf("%c",&s.section);


printf("Name : %s RollNo %d  Standard %d Section %c",s.name,s.rollNo,s.standard,s.section);
}

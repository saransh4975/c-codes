#include<stdio.h>
void main(){
///char name[] = {'H','e','l','l','o','\0'};
///char name[] = "Hello";
char name[20];
int len = 0;

printf("Enter name\n");
///scanf("%s",&name);
scanf("%[^\n]",&name);
printf("My name is %s",name);




//in these we use while (unpredictable loop)
while(name[len] != '\0'){
    len++;
}

printf("\nLength of me name is %d",len);

}

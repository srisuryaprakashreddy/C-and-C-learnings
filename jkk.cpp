#include<stdio.h>
int main()
{
    char name[25],uid[25];
    int age,number;
    printf("enter your name");
    scanf("%s",&name);
    printf("enter your uid");
    scanf("%s",&uid);
    printf("enter your age");
    scanf("%d"&age);
    printf("enter your number");
    scanf("%d",&number);
    printf("name=%S\nuid=%s\nage=%d\nnumber=%d",name,uid,age,number);
    return 0 ;
}

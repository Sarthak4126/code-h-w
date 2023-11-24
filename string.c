// by using scanf with XOR
#include<stdio.h>
void main()
{
    char a[100];
    printf("enter the string");
    scanf("%s,a");
    printf("the string is %s\n",a);
    printf("enter the string\n");
    gets(a);
    printf("the string is %s\n",a);
    printf("enter the string\n");
    scanf("%[^\n]s",a);
    printf("the string is %s\n",a);
}
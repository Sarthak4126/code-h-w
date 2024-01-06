//write a program to find the largest of three numbers a,b,c

#include<stdio.h>
int main()
{
    int a=10,b=20,c=15;
    printf("A: %d",a);
    printf("B: %d",b);
    printf("C: %d,c");
    if(a>b)//a=15,b=20
    {
        if(a>c)//a=15,c=25
        {
            printf("%d is largest number among the given numbers",a);

        }
    }
    else
    {
        printf("%d is largest among all three",c);
    
    }
}
else{
    if(c>b)
    {
        printf("%d is largest among the given numbers",c);

    }
    else{
        printf("%d is largest among the given numbers",b);
    }
}

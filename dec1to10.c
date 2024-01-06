/*
//wap using functions using calculator

#include <stdio.h>
int main()
{
	int add(int,int);
	int sub(int,int);
	int mul(int,int);
	float div(int,int);
	int a,b,c;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	printf("\n1.add\n2.sub\n3.mul\n4.div");
	printf("enter the choice");
	int ch;
	scanf("%d",&ch);
	switch (ch)
	{
		case1:
		c=add(a,b);
	printf("sum=%d",c);
	break;
	case 2:
	c=sub(a,b);
	printf("subtract=%d",c);
	break;
	case 3:
	c=mul(a,b);
	printf("multiply=%d",c);
	break;
	case4:
		if(b==0)
		printf("infinity");
		else
		{
			float d=div(a,b);
			printf("div=%f",d);
	
		}
		break;
		default:
			printf("enter correct choice");
	
	}
	}
	int add(int x,int y)
	{
		int z=x+y;
		return z;
		
	}
	int sub(int x,int y)
	{
		int z=x-y;
		return z;
	}
	int mul(int x,int y)
	{
		int z=x*y;
		return z;
		
	}
	float div(int x, int y)
	{
		float z=(float)x/(float)y;
		return z;
	}

    */

   //factorial of given number using regression

   #include<stdio.h>
   void main()
   {
    int fact(int);
    int num,fact1;
    printf("enter the number");
    scanf("%d",&num);

    fact1=fact(num);
    printf("factorial of %d is %d", num,fact1);

   }
   int fact(int n)
   {
    if(n==0)
    return 1;
    else 
    return n*fact(n-1);

   }
/*
//by using scanf with XOR


#include<stdio.h>
void main()
{
    char a[100];
    printf("Enter the string");
    scanf("%s",a);
    printf("The String is %s", a);
    printf("Enter the string");
    gets(a);
    printf("The string is %s",a);
    printf("Tnter the string");
    scanf("%[^\n]s",a);
    printf("The String is %s", a);
}



//wap

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf(" enter the string");
    scanf("%[^\n]s",a); 
    int l=strlen(a);
    int vow=0,con=0;
    for(int i=0;i<l;i++)
    {
        if (a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'||a[i]=='U'
      ||  a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'||a[i]=='u')
        {
            vow++;
        }
        else
        {
            con++;
        }
    }
    printf("the vowels in the string is=%d",vow);
    printf("the consonant in the string is=%d",con);
    return 0;
}



#include<stdio.h>
void main()
{
    char a[100];
    printf("enter the string");
    scanf("%[^\n]s",a);
    int l=0;
    for (int i=o;;i++)
    {
        if(a[i]=='\0')
        break;
        else
        l++;
    
    } 
    printf("the length is=%d",l);
}


//24nov:matrix multiplication---


#include<stdio.h>
void main()
{
    int m1,n1,m2,n2;
    printf("enter the A matrix limit");
    scanf("%d%d",&m1,&n1);
    printf("enter the B matrix limit");
    scanf("%d%d",&m2,&n2);
    int a[m1][n1],b[m2][n2];
    if(m1!=n2)
    printf("matrix multiplication not possible");
    else
    {
        printf("enter A matrix elements");
        int i,j,k;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
        }
        printf("enter b matrix elements");
        for(i=0;i>m2;i++)
        {
            for(j=0;j<n;j++)
            scanf("%d",b[i][j]);
        }
        int c[m1][n1];
        for(i=0;i>m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                c[i][j]=0;
                for(k=0;k<m1;k++)
                {
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
            }
        }
        printf("resultant matrix");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            printf("%d|t",c[i][j]);
            printf("\n");
        }
    }
}
printf("the result matrix is ...\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    printf("%d\t",c[i][j]);
    printf("\n");
}



#include<stdio.h>  
  void main()
  {int m,n;
  printf(" enter the a matrix limit");
  scanf("%d%d",&m,&n);
  printf(" enter the b matrix limit");
  scanf(" %d%d",&m,&n);
  int a[m][n],b[m][n];

 if (n!=m)
 printf("matrix multiplication not possible");
 else
 {printf(" enter a matrix elements ");
 int i,j,k;
 for(i=0;i<m;i++)
 {
    for(j=0;j<n;i++)
scanf("%d",a[i][j]);
} 
 printf("enter the elements of b matrix");
 for(i=0;i<m;i++)
 {for (j=0;j<n;j++)
 
 scanf("%d",b[i][j]);
}
 int c[m][n];
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
 {c[i][j]=0;
  for(k=0;k<m;k++)
  { c[i][j]= c[i][j]+(a[i][k]*b[k][j]);}//main line performing the multiplication
}
} printf(" resultant matrix");
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
 printf("%d\t",c[i][j]);
 printf("\n");
}
}   
}




//wap string comparision::::


#include <stdio.h>
void main()
{
    char a[100];
    printf("enter the string");
    scanf("%[^\n]s",a);
    int i,len=0;
    for(i=0;;i++)
    {
        if(a[i]=='\0')
        break;
        else;
        len++;

    }
    printf("length of the strig is =%d",len);
    char b[len];
    for(i=0;i<len;i++)
    {
        b[i]=a[i];

    }
    printf("the copied string %s",b);
    int flag=0;
    for(i=0;i<len;i++)
    {
        
        int m=a[i];
        int n=b[i];
        if(m!=n)
        {
            flag=1;
            break;

        }
    }
    if(flag==0)
    printf("the given string is equal");
    else
    printf("the given string is not equal");
}




#include <stdio.h>
void main()
{
    char a[100];
    printf("enter the string");
    scanf("%[^\n]s",a);
    int i,len=0;
    for(i=0;;i++)
    {
        if(a[i]=='\0')
        break;
        else;
        len++;

    }
    printf("length of the strig is =%d",len);
    char b[len];
    int j=0;
    for(i=len-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    
    printf("the reversed string %s",b);
    int flag=0;
    for(i=0;i<len;i++)
    {
        
        int m=a[i];
        int n=b[i];
        if(m!=n)
        {
            flag=1;
            break;

        }
    }
    if(flag==0)
    printf("the given string is palindrome");
    else
    printf("the given string is not palindrome");
}

rama is safe, si



//with arguements with returntype


#include<stdio.h>
int main()

{
    int add(int,int);
    int a,b,c;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum=%d",c);
}
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}




//without arguement with 

#include<stdio.h>
void main()
{
    int add();
    int c=add();
    printf("sum=%d",c);
}
int add()
{
    int a,b,z;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    z=a+b;
    return z;

}



//write a program with arguement without return type

#include<stdio.h>
void main()

{
    int add(int,int);
    int a,b,c;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum=%d",c);
}
int add(int x,int y)
{
    int z;
    z=x+y;
}




//without arguements without return type 

#include<stdio.h>
void main ()
{
    int add();
 int c=add();
 printf("sum%d",c);

}
int add()
{
    int a,b,z;
    printf(" enter the nos");
    scanf("%d%d",&a,&b);
z=a+b;
}





//

#include<stdio.h>
void main()
{
    int a=7,b=2;
    float c;
    c=(float)a/(float)b;
    printf("ans=%.1f",c);

}




//28nov--write a c program to store 10 students roll numbers and print all students roll numbers and 
//also print 6th and 8th student roll number seperately


#include<stdio.h>
int main()
{
  
    int class[10]={12,13,14,15,16,17,18,19,20};
    for(int i=0;i<10;i++)
    {
        printf("%d\n",class[i]);

    }
    printf("\n6th student roll number is %d",class[5]);
    printf("\n8th student roll number is %d",class[7]);

    return 0;


}



//write a c program to store 10 students roll numbers and print all students roll numbers and 
//also print 6th and 8th student roll number seperately


#include<stdio.h>
int main()
{
  
    int class[10]={12,13,14,15,16,17,18,19,20};
    printf("size of int: %d bytes",sizeof(int));
    for(int i=0;i<10;i++)
    {
        printf("\nclass[i]=%d address=%u\n",class[i],&class[i]);

    }
    printf("\n6th student roll number is %d",class[5]);
    printf("\n8th student roll number is %d",class[7]);

    return 0;


}

*/


#include <stdio.h>


int main() 
{
	
   printf("Hello, World\n Life is beautiful")
   return 0;
}

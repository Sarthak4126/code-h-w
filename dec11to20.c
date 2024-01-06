/*
//11december
//malloc

#include<stdio.h>
#include<stdlib.h>
void main()
{
    char*ptr=(char*)malloc(sizeof(char));
    if(ptr==NULL)
    printf("memory error");
    else
    {
        *ptr='s';
        printf("%c\t",*ptr);

    }
    free(ptr);
    printf("%c",*ptr);
}


//
#include<stdio.h>
#include<stdlib.h>
void main()
{
int i=10;
int *p=&i;
p=p+1;
printf("%d\n",*p);
}



//calloc-

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("enter the no of char");
    scanf("%d",&n);
    char*ptr=(char*)calloc(n,size of (char));
    if(ptr==NULL)
    printf("memory error");
    else
    {
        for(int i=0;i<n;i++)
        {
            scanf("%c",&*(ptr+i));
        }
    }
        printf("the string  is \n");
        for(int i=0;i<n;i++)
        printf("%c",*(ptr+i));
        free(ptr);
        printf("\n");
        for (int i=0;i<n;i++)
        printf("%c",*(ptr+i));

    }






int main(){
    int n;
    scanf("%d",&n);
    int *arr1=(int *)calloc(n,sizeof(int))
    int *arr2=(int *)calloc(n,sizeof(int))

    if (arr1==NULL || arr2 == NULL)
}



//program to store the information of students marks using structures 
//and find the total marks of individual student:


#include<stdio.h>
struct student()
{
    char name(50);
    int roll;
    int sub1;
    int sub2;
    int sub3;


};
int total_marks(struct student s);
{
    return s.sub1+s.sub2+s.sub3;
}

int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the details of a student %d: \n",i+1);
        printf("name: ");
        scanf("%s",&s[i].name);
        printf("Roll nimber: ");
        scanf("%d",&s[i].roll);
        printf("Marks of a subject 1: ");
        scanf("%d",&s[i].sub1);
        printf("Marks of a subject 2: ");
        scanf("%d",&s[i].sub2);
        printf("Marks of a subject 3: ");
        scanf("%d",&s[i].sub3);
    }
    for(int i=0;i<3;i++)
    {
        printf("total marks of %s (roll: %d) is : %d",s[i].name,s[i].rollno,total_marks(s[i]));
    }
    return 0;
}

//program to implement an array of structures for student makrs for each student and pass it into 
//the function for various operations 

//program to store the information of students marks using structures 
//and find the total marks of individual student:


#include<stdio.h>
struct student()
{
    char name(50);
    int roll;
    int sub1;
    int sub2;
    int sub3;


}
int total_marks(struct student s);
{
    return s.sub1+s.sub2+s.sub3;
}
void display(struct student s)
{
    printf("\n student information");
    printf("\n Name: %s",s.name);
    printf("\nRoll: %d,s.roll");
    printf("\nsubject1: %d,s.subject1");
    printf("\nsubject2: %d,s.subject2");
    printf("\nsubject3: %d,s.subject3");
    printf()
}

int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the details of a student %d: \n",i+1);
        printf("name: ");
        scanf("%s",&s[i].name);
        printf("Roll nimber: ");
        scanf("%d",&s[i].roll);
        printf("Marks of a subject 1: ");
        scanf("%d",&s[i].sub1);
        printf("Marks of a subject 2: ");
        scanf("%d",&s[i].sub2);
        printf("Marks of a subject 3: ");
        scanf("%d",&s[i].sub3);
    }
    for(int i=0;i<3;i++)
    {
        printf("total marks of %s (roll: %d) is : %d",s[i].name,s[i].rollno,s[i].marks);
    }
}




#include<stdio.h>
struct student//student is user def. datatype name
{
    char name[50];
    int roll;
    float per;

};
int main()
{
    struct student s;
    printf("enter the student details: ");
    printf("Name ");
    scanf("%s",s.name);
    printf("roll ");
    scanf("%d",s.roll);
    printf("percentage is: ");
    scanf("%f",s.per);



 printf("enter the student details are: ");
    printf("Name: %s,s.name");
    
    printf("roll: %d,s.roll");
    
    printf("percentage is:%f.s.percentage");
}
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2;
    printf("enter the coordinates of first point x1,y1: ");
    scanf("%l %l";&x1,&y1);
    printf("enter the coordinates of first point x2,y2: ");
    scanf("%lf%lf";&x2,&y2);

    distance=sqrt(pow(x2-x1,2))+(pow(y2-y1,2));

    printf("the euclidean distance b/w two points is %.2f\n",distance);
    return 0;
}
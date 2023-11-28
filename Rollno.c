//write a c program to store 10 students roll number and print all the students roll numbers and also print 6th and 8th students rool number seperatly.
#include<stdio.h>
int main()
{
    
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    printf("array elements are");
    for ( i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    

    printf("\n 6th element is: %d",a[5]);
     printf("\n 8th element is: %d",a[7]);
    return 0;

}
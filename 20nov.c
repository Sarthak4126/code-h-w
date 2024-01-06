/*
//program to insert element an array

#include<stdio.h>
void main()
{
    int arr[30],ele,num,i,loc;
    printf("enter the size of an array");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the elements arr[%d]",i);
        scanf("%d",&arr[i]);

    }
    printf("enter the element to insert");
    scanf("%d",&ele);
    printf("enter the location");
    scanf("%d",&loc);
    for(i=num;i>=loc;i--)
    {
        arr[i]=arr[i-1];

    }
    num++;
    
    arr[loc-1]=ele;
    //print the result after insert
    for(i=0;i<num;i++)
    {
        printf("\n%d",arr[i]);
    }

}



//wap to copy one array to another array


#include<stdio.h>
void main()
{
    int arr1[30],arr2[30],ele,num,i,loc;
    printf("enter the size of an array");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the elements arr[%d]",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<num;i++)
    {
        arr2[i]=arr1[i];

    }
    for(i=0;i<num;i++)
    {
        printf("%d\t",arr2[i]);
    }
}
//reverse order

#include<stdio.h>
void main()
{
    int arr1[30],arr2[30],ele,num,i,loc;
    printf("enter the size of an array");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the elements arr[%d]",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<num;i++)
    {
        arr2[i]=arr1[i];

    }
    for(i=0;i<num;i++)
    {
        printf("%d\t",arr2[i]);
    }
    for(i=num;i>=0;i--)
    {
        printf("%d\t",arr1[i]);
    }
}

*/


//


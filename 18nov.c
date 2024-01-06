/*
//program to accesing array

#include<stdio.h>
void main()
{
    int arr[]={1,22,35,5,4,6,8};
    int i;
    for (i=0;i<7;i++)
    {
        printf("%d %d %d %d",arr[i],*(i+arr),*(arr+i),i[arr]);

    }
}




//linear search
#include<stdio.h>
void main()
{
    int arr[30],ele,i,found=0,num;
    printf("enter the size of an array\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the element arr[%d]",i);
        scanf("%d",&arr[i]);

    }
    printf("\n enter the elements to search");
    scanf("%d",&ele);
    for(i=0;i<num;i++)
    {
        if(arr[i]==ele)
        printf("element is found at the index %d=%d:\n",ele);
        found=1;
        break;

    }
    if(!found)
    printf("element is not found");


}


//program of delete the element from an array

#include<stdio.h>
void main()
{
    int arr[30],num,i,loc;
    printf("\n enter the size of an array");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the element arr[%d]",i);
        scanf("%d",&arr[i]);


    }
    //read the locaton to delete
    printf("enter the location to delete");
    scanf("%d",&loc);
    while(loc<num)
    {
        arr[loc-1]=arr[loc];
        loc++;

    }
    num--;
    //print the array
    for(i=0;i<num;i++)
    {
        printf("%d\t",arr[i]);
    }
}


// C Program to Insert an element
// at a specific position in an Array

#include <stdio.h>

int main()
{
	int arr[100] = { 0 };
	int i, x, pos, n = 10;

	// initial array of size 10
	for (i = 0; i < 10; i++)
		arr[i] = i + 1;

	// print the original array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	// element to be inserted
	x = 50;

	// position at which element
	// is to be inserted
	pos = 5;

	// increase the size by 1
	n++;

	// shift elements forward
	for (i = n - 1; i >= pos; i--)
		arr[i] = arr[i - 1];

	// insert x at pos
	arr[pos - 1] = x;

	// print the updated array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
*/

#include<stdio.h>
void main()
{
    int arr1[30],arr2[30],ele,num,i,loc;
    printf("enter the size of an array");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the elements arr[%d]",i);
        scanf("%d",&arr[i]);
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
        printf("%d\t",arr[i]);
    }
}
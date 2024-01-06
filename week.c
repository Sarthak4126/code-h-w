#include<stdio.h>
int main()
{
    int day;
    printf("enter the number between 1 to7: ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("\n Day 1 is monday");
        break;
        case 2:
        printf("\n Day 2 is tuesday");
        break;
        case 3:
        printf("\n Day 3 is wednesday");
        break;
        case 4:
        printf("\n Day 4 is thursday");
        break;
        case 5:
        printf("\n Day 5 is friday");
        break;
        case 6:
        printf("\n Day 6 is saturday");
        break;
        case 7:
        printf("\n Day 7 is sunday");
        break;
        default:
        printf("there is no more days in a week");
        break;
    }
    return 0;





    }
    */
   //write  a program to convert years into 1)sec ,2)min,3)hours,4)days,5)months
   #include<stdio.h>
   int main()
   {
    int years;
    printf("Enter your choice from the following:");
    printf("1.SECONDS");
    printf("2.MINUTES");
    printf("3.HOURS");
    printf("4.DAYS");
    printf("5.MONTHS");
    printf("Enter your choice:");
    scanf("%d",&years);
    long mon=years*12;
    long days=month*30;
    long hours=days*24;
    long min=hours*60;
    long sec=min*60;
    switch(choice)
    {
        case 1:
        printf("%d Years in seconds is : %d",years,sec);
        break:

        case 2:
        printf("%d years in minutes is : %d",years,min);
        break;

        case 3:
        printf("%d years in hours is : %d",years,hours);
        break;

        case 4:
        printf("%d years in days is : %d", years,days);
        break;

        case 5:
        printf("%d year in months is : %d",years,days );
        break;

        default:
        printf("Invalid statement");
        
        
        break;
    }

   }

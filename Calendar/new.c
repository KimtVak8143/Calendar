#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

//function declarations 
void diff(date, date); // to calculate the difference between 2 dates - day wise, month wise, year wise
void show(date, date); // to show the calendar dates
void check(date, date); // to check for correct data
void input(date, date); // to take input data for operations

//structure declaration
typedef struct D
{   int day;
    char month[10];
    int year;
}date;
//date d1,d2;

void main()
{   printf("Hello\n");
    date a,b;;
    input(a,b);
    show(a,b);

}

void input(date d1,date d2) // for input of data
{   printf("Enter the Day:\t");
    scanf("%d",&d1.day);
    printf("Enter the Month:\t");
    scanf("%d",&d1.month);
    printf("Enter the Year:\t");
    scanf("%d",&d1.year);
    printf("Enter the Day:\t");
    scanf("%d",&d2.day);
    printf("Enter the Month:\t");
    scanf("%d",&d2.month);
    printf("Enter the Year:\t");
    scanf("%d",&d2.year);
    check(d1,d2);
}


void diff(date x,date y) // to calculate the difference between 2 dates - day wise, month wise, year wise
{   printf("The difference between 2 dates are :\n");
    date d;
    d.day= y.day-x.day;
    d.month = y.month-x.month;
    d.year= abs(y.year-x.year);

}
void show(date x,date y)  //to show the calendar dates
{   int i;
    char *days[10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    for(i=0;i<7;i++)
    {   printf("%s ",days[i]);
    }
    for(i=1;i<=31;i++)
    {   if(i%7==1)
            printf("\n");
        printf("%d  ",i);
    }
}

void check(date c1,date c2)  // to check for correct data
{   // Check for days
    if(c1.day <0 || c1.day>31)
        printf("Invalid Date 1");
    if(c2.day <0 || c2.day>31)
        printf("Invalid Date 2");

    // Check for months
    if(c1.month<0 || c1.month>12)
        printf("Invalid Month 1");
    if(c2.month<0 || c2.month>12)
        printf("Invalid Month 2");
        
    // Check for years
    if(c1.year<0)
        printf("Invalid Year 1");
    if(c2.year<0)
        printf("Invalid Year 2");
}

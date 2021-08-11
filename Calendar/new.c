#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

//void diff(int,int,int); // to calculate the difference between 2 dates - day wise, month wise, year wise
void show(); //to show the calendar dates

typedef struct D
{   int day;
    char month[10];
    int year;
}date;

void main()
{   printf("Hello\n");
    show();

}

void show()
{   int i;
    char *days[10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    for(i=0;i<7;i++)
    {   printf("%s ",days[i]);
    }
   // printf("\n");
    for(i=1;i<=31;i++)
    {   if(i%7==1)
            printf("\n");
        printf("%d  ",i);
    }
}

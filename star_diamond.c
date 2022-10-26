#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");

 int count =4;
    for(int r=1;r<=4;r++)
{
int star=0;

    for (int spaces=1;spaces<=7;spaces++)
    {
    if (spaces<count)
    {
        printf(" ");
    }
    if ((spaces>=count)&&(star<(2*r-1)))
    {   printf("*");
    star++;
    
    }
   
    }
    printf("\n");
      count--;
   
  
}

 int count1 =1;
 int sp=4;
    for(int r1=4;r1>0;r1--)
{
int star1=0;

    for (int spaces1=1;spaces1<=7;spaces1++)
    {
    if (spaces1<=(4-r1))
    {
        printf(" ");
    }
        
        
    if ((spaces1>=count1)&&star1<(2*r1-1))
    {
        printf("*");
        star1++;
    }
}
printf("\n");
count1++;
}
}

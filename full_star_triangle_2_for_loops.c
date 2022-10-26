#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");

 int count =4;
    for(int r=1;r<=4;r++)//i is for rows 
{
int star=0;

    for (int spaces=1;spaces<=7;spaces++)//j is for columns
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
}

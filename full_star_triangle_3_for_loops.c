#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");


    for(int r=1;r<=4;r++)//i is for rows 
{

    for (int spaces=1;spaces<=4-r;spaces++)//j is for columns
    {
    
    printf(" ");
    }

    
    for (int star=1;star<=(2*r-1);star++)
    {
        printf("*");
    }
    printf("\n");
  
}
}

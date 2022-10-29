#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
char character ='a';
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
    {    printf("%c",character );// prints characters successively 
        character ++;
        star++;
    }
   
    }
    printf("\n");
      count--;
   
  
}
}

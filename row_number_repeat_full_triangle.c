#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
int number=1;
 int count =3;
    for(int r=1;r<=3;r++)//i is for rows 
{
int star=0;

    for (int spaces=1;spaces<=5;spaces++)//j is for columns
    {
    if (spaces<count)
    {
        printf(" ");
    }
    if ((spaces>=count)&&(star<(2*r-1)))
    {    printf("%d",number );// prints numbers successively 
       
        star++;
    }
   
    }
    printf("\n");
      count--;
       number ++;
   
  
}
}

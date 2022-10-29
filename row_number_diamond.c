#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
int number=1;

 int count =3;
    for(int r=1;r<=3;r++)
{
int star=0;

    for (int spaces=1;spaces<=5;spaces++)
    {
    if (spaces<count)
    {
        printf(" ");
    }
    if ((spaces>=count)&&(star<(2*r-1)))
    {   printf("%d",number);
    star++;
    
    
    }
   
    }
    printf("\n");
      count--;
      number++;
   
  
}

 int count1 =1;
 int sp=3;
    for(int r1=3;r1>0;r1--)
{
int star1=0;

    for (int spaces1=1;spaces1<=5;spaces1++)
    {
    if (spaces1<=(3-r1))
    {
        printf(" ");
    }
        
        
    if ((spaces1>=count1)&&star1<(2*r1-1))
    {
        printf("%d",number);
     
        star1++;
    }
}
printf("\n");
count1++;
number++;
}
}

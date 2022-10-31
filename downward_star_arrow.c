#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");

int blankspaces;int r=4;
 for (int row=2;row<=5;row++)//rows 
 {   blankspaces=0;
 
    for (int spaces=1;spaces<8;spaces++)//positions in a line
    {
        if (spaces==(row-1))
        {printf("*");
              
        }
        else if (spaces<(row-1))
        {printf(" ");
        blankspaces++;
              
        }
        
       else if (spaces==(blankspaces+(2*r-1)))
       { printf("*");
            
       }
        else if (spaces>(row-1))
        {printf(" ");
       
        }
        
    }
    printf("\n");
    r--;
 }
}

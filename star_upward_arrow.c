#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");

int blankspaces;int r=1;
 for (int row=5;row>=2;row--)//for rows
 {   blankspaces=0;
 
    for (int spaces=1;spaces<8;spaces++)//for positions in one line 
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
    r++;
 }
}

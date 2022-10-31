#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
int n =1;// n is for numbers
int ublankspaces;int ur=1;
 for (int urow=5;urow>=2;urow--)//for rows
 {   ublankspaces=0;
 
    for (int uspaces=1;uspaces<8;uspaces++)//for positions in one line 
    {
        if (uspaces==(urow-1))
        {printf("%d",n);
        n++;
              
        }
        else if (uspaces<(urow-1))
        {printf(" ");
        ublankspaces++;
              
        }
        
       else if (uspaces==(ublankspaces+(2*ur-1)))
       { printf("%d",n);
        n++;
            
       }
        else if (uspaces>(urow-1))
        {printf(" ");
       
        }
        
    }
    printf("\n");
    ur++;
 }
 
 
}

#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
int count =0; // to print numbers successively 
    for(int i=1;i<5;i++)// i is rows
{

    for (int j=1;j<=i;j++)// j is columns 
    {
    
        printf("%d\t",count);
        count++;
        
    }
    printf("\n");
}
}
    

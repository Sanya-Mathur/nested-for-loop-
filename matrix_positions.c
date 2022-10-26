#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
    for(int i=1;i<=5;i++)//i is for rows 
{
 printf("[");
    for (int j=1;j<=5;j++)//j is for columns
    {
    
        printf("(%d,%d)\t",i,j);
        
    }
     printf("]");
    printf("\n");
}
}
    


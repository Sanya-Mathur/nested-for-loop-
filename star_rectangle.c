#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
 int rows;
 int columns;
 printf("enter rows and coloumns");
 scanf("%d%d",&rows,&columns);
 for(int i=1;i<=rows;i++)// i is for rows
 {
    for(int j=1;j<=columns;j++)
    {
        printf("*");
    }
    printf("\n");
 }
}

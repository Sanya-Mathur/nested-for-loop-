#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");

for(int i=1;i<=10;i++)
{
  printf("*")  ;
}
printf("\n")  ;
for(int rows=1;rows<=10;rows++)
{for(int j=1;j<=10;j++)
{
    if(j==1||j==10)
    {
        printf("*");
    }
    else
    printf(" ");
}
printf("\n")  ;
}
for(int k=1;k<=10;k++)
{
  printf("*")  ;
}
}

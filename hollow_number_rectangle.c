#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
int n=1;//number
for(int i=1;i<=3;i++)
{
  printf("%d",n)  ;
  n++;
}
printf("\n")  ;
for(int rows=1;rows<=1;rows++)
{for(int j=1;j<=3;j++)
{
    if(j==1||j==3)
    {
        printf("%d",n)  ;
  n++;
    }
    else
    printf(" ");
}
printf("\n")  ;
}
for(int k=1;k<=3;k++)
{
   printf("%d",n)  ;
  n++;
}
}

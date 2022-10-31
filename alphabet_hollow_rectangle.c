#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
char c='a';
for(int i=1;i<=6;i++)
{
  printf("%c",c)  ;
  c++;
}
printf("\n")  ;
for(int rows=1;rows<=6;rows++)
{for(int j=1;j<=6;j++)
{
    if(j==1||j==6)
    {
         printf("%c",c)  ;
  c++;
    }
    else
    printf(" ");
}
printf("\n")  ;
}
for(int k=1;k<=6;k++)
{
   printf("%c",c)  ;
  c++;
}
}

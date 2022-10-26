#include <stdio.h>

void main() 
{  printf("RA2211042010042\n");
char character ='a';
    for(int i=5;i>0;i--)//i is for rows 
{

    for (int j=1;j<=i;j++)//j is for columns
    {
    
        printf("%c\t",character );
        character ++;
    }
    printf("\n");
}
}
    

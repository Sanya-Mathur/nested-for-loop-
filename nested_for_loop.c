#include <stdio.h>

void main() 
{ 
    for(int i=1;i<5;i++)
{
    int count=0;
    for (int j=i;j<7;j++)
    {
        count++;
        printf("%d\t",j);
        if (count==3)
        {break;}
    }
    printf("\n");
}
}
    

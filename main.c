#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
    if(i<=5)
         {
            for(k=5-i;k>=0;k--)
             {
                printf("*");
             }
            for(j=1;j<=2*i-1;j++)
             {
                printf(" ");
             }
              for(k=5-i;k>=0;k--)
             {
                printf("*");
             }
          }
    else if(i>=6)
        {
             for(k=6;k<=i+1;k++)
             {
               printf("*");
             }
             for(j=17;j>=2*i-1;j--)
             {
                printf(" ");
             }
            for(k=6;k<=i+1;k++)
             {
               printf("*");
             }
        }

        printf("\n");
    }


    return 0;
}

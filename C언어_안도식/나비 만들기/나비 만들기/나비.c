#include <stdio.h>
 
void main(void)
 
{
 
    int iNum;
 
    int i, j, k = 1;
 
    scanf("%d", &iNum);
 
    if (iNum%2)

	{
 
    for(i = 1; i <= iNum; i++)
 
    {
 
        for(j = 1; j <= iNum; j++)
 
        {
 
            if(j <= k || j >= (iNum+1-k))
 
                printf("*");
 
            else
 
                printf(" ");
 
        }
 
        printf("\n");
 
        i < (iNum/2)+1 ? k++ : k--;
 
    }
	}

	else

	{

		 for(i = 1; i <= iNum/2; i++)
 
    {
 
        for(j = 1; j <= iNum; j++)
 
        {
 
            if(j <= k || j >= (iNum+1-k))
 
                printf("*");
 
            else
 
                printf(" ");
 
        }
 
        printf("\n");
 
        k++;
 
    }

		 k=iNum/2;

		 for(i = 1; i <= iNum/2; i++)
	
    {
 
        for(j = 1; j <= iNum; j++)
 
        {
 
            if(j <= k || j >= (iNum+1-k))
 
                printf("*");
 
            else
 
                printf(" ");
 
        }
 
        printf("\n");
       k--;
 
    }
 
}
}
	

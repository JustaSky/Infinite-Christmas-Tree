#include <stdio.h>

int main()
{
    int num;
    printf("enter number :\n");
    scanf("%d", &num);
    while(1)
    {    for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= 2 * num - 1; j++)
            {
                if (j >= num - (i - 1) && j <= num + (i - 1))
                    printf("*");
                else
                    printf(" ");
            }printf("\n");
        }
    }    
    return 0;
}
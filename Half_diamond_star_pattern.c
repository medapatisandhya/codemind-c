#include<stdio.h>
int main()
{
    int i, j, rows;
    scanf("%d", &rows);
    if(rows<=2 || rows>=100)
    {
        printf("The pattern is not possible");
        }
        else {for(i = 1; i <= rows; i++)
        {
            for(j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(i = rows - 1; i > 0; i--)
        {
            for(j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("
");
         }
        }
    
}
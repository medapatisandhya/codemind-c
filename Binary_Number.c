#include <stdio.h>
void printBinary(int n)
{
    int i, j;
    for (i = 0; i < (1 << n); i++)
    {
        for (j = n - 1; j >= 0; j--)
        {
            if (i & (1 << j))
            {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("
");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printBinary(n);
    return 0;
}
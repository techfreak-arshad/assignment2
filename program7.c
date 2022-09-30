#include <stdio.h>
int main()
{
    int n, R, count = 0;
    printf("enter a number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        R = n & 1;
        count++;
        if (R == 1)
        {
            printf("Position of first 1 in LSB = %d", count);
            break;
        }
        n = n >> 1;
    }
    return 0;
}

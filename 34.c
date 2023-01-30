#include<stdio.h>

int main()
{
    int m, n, i;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d * %d = %d\n", m, i, m*i);
    }
    return 0;
}

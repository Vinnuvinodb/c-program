#include<stdio.h>
int main()
{
    int array[7] = {16, -18, 27, -16, 23, -21, 19};
    int i, count=0;

    for(i=0; i<7; i++)
    {
        if(array[i]<0)
        {
            count++;
        }
    }

    printf("Number of negative numbers in Array elements = %d", count);
    return 0;
}

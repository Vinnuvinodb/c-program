#include<stdio.h>
int main()
{
signed num;
int i,factor=0;
printf("enter a number: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
 factor++;
}
}
printf("Number of factors=%d",factor);
return 0;
}

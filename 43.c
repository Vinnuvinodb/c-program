#include<stdio.h>
int main()
{
int a,b,c,n,i;
printf("enter n value: ");
scanf("%d",&n);
a=1;
b=0;
for(i=0;i<n;i++)
{
printf("%d ",c);
c=a+b;
a=b;
b=c;
}
return 0;
}

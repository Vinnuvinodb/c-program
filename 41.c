#include<stdio.h>
int main()
{
int i,j,n;
char a;
printf("enter character to be printed: ");
scanf("%c",&a);
printf("\nMax number of times printed: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%c ",a);
}
printf("\n");
}
return 0;
}

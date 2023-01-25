#include<stdio.h>
int main() {
    int num,i,factorial=1;
    printf("enter a positive integer:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
	   factorial=*i;
   }
   printf("factorial of %d is %d",num,factorial);
   return 0;
}

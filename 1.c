#include<stdio.h>
#include<math.h>
int main() {
int x,n,choice;
printf ("enter value of x:");
scanf("%d",&x);
printf("enter value of n:");
scanf("%d",&n);
printf("enter choice(1-pow),(2-add),(3-sub),(4-mul),(5-div):");
scanf("%d",&choice);
 switch(choice) {
   case 1:
   	printf("pow(%d,%d)=%if\n",x,n,(x,n));
   	break;
   case 2:
   	printf("add(%d,%d)=%d\n",x,n,x+n);
   	break;
   case 3:
   	printf("sub(%d,%d)=%d\n",x,n,x-n);
   	break;
   case 4:
    printf("sub(%d,%d)=%d\n",x,n,x*n);
    break;
   case 5:
   	printf("sub(%d,%d)=%d\n",x,n,x/n);
   	break;
   	default:
   	 printf("enter correct choice");
   	return 0;
   }

}

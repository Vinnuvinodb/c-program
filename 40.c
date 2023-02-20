#include <stdio.h>
int main()
{
char str[100];
int i,lower_case,upper_case,digits,special;
i = lower_case=upper_case= digits = special = 0;
printf("Enter any String : ");
gets(str);
while (str[i] != '\0')
{
if( (str[i] >= 'a' && str[i] <= 'z') )
{
lower_case++;
}
else if((str[i] >= 'A' && str[i] <= 'Z'))
{
upper_case++;
}
else if (str[i] >= '0' && str[i] <= '9')
{
digits++;
}
else
special++;
i++;
}
printf("\n Number of lower_case in the String = %d",lower_case);
printf("\n Number of upper_case in the String = %d",upper_case);
printf("\n Number of Digits in the String = %d", digits);
printf("\n Number of Special Characters in the String = %d", special);
return 0;
}

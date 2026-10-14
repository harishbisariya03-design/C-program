#include<stdio.h>
// sum of 10 naturals numbers using while loop

int main()
{
 int i=1,sum=0;
while (i<11)
{
      sum +=i;
      i++;
}
printf("The sum of 10 naturals nummbers is= %d",sum);
return 0;
}
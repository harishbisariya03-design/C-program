#include<stdio.h>
// find the factorial of a number
int main()
{
int i,n;
int factorial=1;

printf("Enter a number=",n);
scanf("%d",&n);

for(i=n;i>=1;--i)
{
   factorial*=i;
}
printf("The factorial is %d\n",factorial);
return 0;
}

#include<stdio.h>
// find the factorial of a number using while loop
int main()
{
int i=1,n;
int factorial=1;

printf("Enter a number=",n);
scanf("%d",&n);

while (i<=n)
{
    factorial *=i;
    i++;
}

printf("The factorial is %d\n",factorial);
return 0;
}
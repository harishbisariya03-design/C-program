#include<stdio.h>
// sum of 10 naturals numbers using do-whiile loop
int main()
{
int i=1,sum=0;
do
{
    sum=sum+i;
    ++i;
} while (i<11);
printf("The sum of 10 naturals numbers is=%d",sum);
return 0;
}

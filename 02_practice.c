#include<stdio.h>
// multiplication table of 10 in reverse order
int main()
{
int i;
for(i=10;i>0;--i)
{
    printf("10 X %d = %d\n",i,10*i);
}
return 0;
}

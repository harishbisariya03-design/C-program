#include<stdio.h>
int main()
{
 int num,rev,once,tens,hundred;

 printf("Enter a three digit number:");
 scanf("%d",&num);

  once=num%10;
  tens=(num/10)%10;
  hundred=num/100;

  rev=once*100+tens*10+hundred;

  printf("rev:%d\n",rev);
  
return 0;
}

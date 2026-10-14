#include<stdio.h>
int main()
{
 int n,i,sum=0;

 printf("How many nummbers do you want to display the sum=");
 scanf("%d",&n);

 for(i=0;i<=n;++i)
 {
    sum=sum+i;
 }

 printf("The sum of  numbers is:%d\n",sum);
return 0;
}

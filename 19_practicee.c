#include<stdio.h>
int main()
{
 int n;
 printf("Enter a number:");
 scanf("%d",&n);

 if(n%19==0)
 {
    printf("The number is divisible by 19 !");
 }
 else
 {
    printf("The number is not divisible by 19 !");
 }
return 0;
}

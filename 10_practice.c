#include<stdio.h>
// define prime or not prime number using while loop
int main()
{
int n;
int i=2;
int c=0;
printf("Enter a number=");
scanf("%d",&n);

while (i<=n)
{
   if(n%i==0)
   {
    c++;
   }
   ++i;
}
if(c==1){
    printf("This is a prime numbber!");
}
else{
    printf("This is not a prime number!");
}

return 0;
}

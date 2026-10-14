#include<stdio.h>
// define prime or not prime number using for loop
int main()
{
 int n;
 int c=0;
  printf("Enter a number=");
  scanf("%d",&n);

  for(int i=2;i<=n;i++)
  {
    if(n%i==0){
    c++;
  
  }
  }
  if(c==1)
  {
       printf("This is a prime number!",n);
  }
  else {
    printf("This is not a prime number!",n);
  }

return 0;
}

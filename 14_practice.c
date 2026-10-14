#include<stdio.h>
int main()
{
 int x,i,c=0;

 printf("Enter a number=");
 scanf("%d",&x);

 for(i=2;i<=x;++i)
 {
    if(x%i==0)
    c++;
 }    
        if(c==1)
        {
            printf("Given number is prime:");
        }

    else{
        printf("Given number is not prime:");
    }
 
return 0;
}

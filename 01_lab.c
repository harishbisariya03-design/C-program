#include<stdio.h>
// display numbers in a matrix form
int main()
{
    int i,j,p=1;

  for(i=1;i<=3;++i)
  {
    for(j=1;j<=3;++j)
    {
        printf("%d  ",p);
        ++p;
    }
    printf("\n");
  }  
return 0;
}

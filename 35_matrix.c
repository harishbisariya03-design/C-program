#include<stdio.h>

int main()
{
  int j,i,a[3][3],us=0,ls=0;

  printf("Enter 9 Elements into a matrix\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Upper matrix elements\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
        if(i<=j)
        {
      printf("%4d",a[i][j]); 
        }
        else
        printf("    ");
    }
      printf("\n");
  }
    printf("lower matrix elements\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
        if(i>=j)
        {
      printf("%4d",a[i][j]); 
        }
        else
        printf("    ");
    }
      printf("\n");
  }

return 0;
}
#include<stdio.h>
// display two matrix and  seprate sum of these all  elements 
int main()
{
  int j,i,a[3][3];
  int b[3][3];
  int sum1=0,sum2=0;

  printf("Enter 9 Elements into a MATRIX_A\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter 9 Elements into a MATRIX_B\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("OUTPUT\n");
  printf("MATRIX ARRAY_A\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      printf("%d ",a[i][j]); 
    }
      printf("\n");
  }
  {
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      sum1 = sum1+a[i][j]; 
    }
  }
  printf("The sum of elements of Matrix-A is:%d\n",sum1);
 }
 printf("MATRIX ARRAY_B\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      printf("%d ",b[i][j]); 
    }
      printf("\n");
  }
  {
for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      sum2 = sum2+b[i][j];
    }
  }
    printf("The sum of elements of Matrix-B is:%d\n",sum2);
  }
return 0;
}
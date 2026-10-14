#include<stdio.h>
// display two matrix and  sum of these all  elements 
int main()
{
  int i,j,a[3][3];
  int b[3][3];
  int sum=0;

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
  printf("MATRIX-A\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      printf("%d ",a[i][j]); 
    }
      printf("\n");
  }
 
 printf("MATRIX-B\n");
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
      sum = sum+a[i][j]+b[i][j];
    }
  }
    printf("The sum of all elements of MATRIX-A and Matrix-B is:%d\n",sum);
  }
return 0;
}
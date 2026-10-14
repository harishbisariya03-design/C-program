#include<stdio.h>
// wap to read two matrix and display the output
int main()
{
  int j,i,a[3][3];
  int b[3][3];

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
return 0;
}
#include<stdio.h>
// wap to read a matrix elements and display them
int main()
{
  int j,i,a[3][3];

  printf("Enter 9 Elements into a matrix\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("OUTPUT\n");
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      printf("%d  ",a[i][j]); 
    }
      printf("\n");
  }

return 0;
}
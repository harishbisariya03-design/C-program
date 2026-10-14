#include<stdio.h>
// wap to display a matrix using array
int main()
{
  int j,i,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};



  printf("OUTPUT\n");

  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      printf("%2d",a[i][j]); //here %2d means 2 spaces
    }
      printf("\n");
  }

return 0;
}
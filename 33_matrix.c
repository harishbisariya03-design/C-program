#include<stdio.h>
int main()
{
  int i,j,k,a[4][4],b[4][4],c[4][4];

  printf("Enter 16 elements into a Matrix-A:\n");
  for(i=0;i<4;++i)
  {
    for(j=0;j<4;++j)
    {
        scanf("%d",&a[i][j]);
    }
  }
    printf("Enter 16 elements into a Matrix-B:\n");
  for(i=0;i<4;++i)
  {
    for(j=0;j<4;++j)
    {
        scanf("%d",&b[i][j]);
    }
  }
  
 for(i=0;i<4;++i)
 {
  for(j=0;j<4;++j)
  {
    c[i][j]=0;
    for(k=0;k<4;++k)
    {
      c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
  }
 }

  printf("OUTPUT\n");
  printf("Matrix-A\n");
  for(i=0;i<4;++i)
  {
    for(j=0;j<4;++j)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
   printf("Matrix-B\n");
  for(i=0;i<4;++i)
  {
    for(j=0;j<4;++j)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
   printf("Matrix-C\n");
  for(i=0;i<4;++i)
  {
    for(j=0;j<4;++j)
    {
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
  
return 0;
}

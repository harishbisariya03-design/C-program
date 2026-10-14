#include<stdio.h>
int main()
{
  int a[20],b[20],i,n,m,c[100];;
  
  printf("H.M.N. do you want to insert in an ARRAY-A\n");
  scanf("%d",&n);
  print("H.M.N do you want to insert in an ARRATY-B\n");
  scanf("%d",&m);
  printf("Enter %d number in an ARRAY-A\n",n);
  for(i=0;i<=n;++i);
  {
    scanf("%d",&a[i]);
    c[i]=a[i];
  }

  printf("Enter %d number in an ARRAY-B\n",m);
  for(i=0;i<=m;++i)
  {
    scanf("%d",&b[i]);
    c[n+m]=b[i];
  }
  

return 0;
}

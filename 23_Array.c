#include<stdio.h>
// wap to read two array a and b and merge there values in an array c
int main()
{
  int i,a[10],b[10],c[20];

  printf("Enter 6 elements in an array a:");
  for(i=0;i<6;++i)
{
    scanf("%d",&a[i]);
    c[i]=a[i];
}
 printf("Enter 6 elements in an array b:");
 for(i=0;i<6;++i)
{
    scanf("%d",&b[i]);
    c[i+6]=b[i];
}
 printf("OUTPUT\n");
 printf("ARRAY-A\t\tARRAY-B\n");
 for(i=0;i<6;++i)
{
    printf("%d\t\t%d\n",a[i],b[i]);
}
printf("ARRAY-C\n");
for(i=0;i<12;++i)
{
    printf("%d\n",c[i]);
}

return 0;
}

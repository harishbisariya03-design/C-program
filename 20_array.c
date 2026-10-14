#include<stdio.h>
// wap to display an array 
int main()
{
 int i,a[10];

 printf("Enter 5 elements in an array:\t");

 
 for(i=0;i<5;++i)
 {
   scanf("%d",&a[i]);
 } 
 printf("OUTPUTT\n");
 for(i=0;i<5;++i)
 {
   printf("%d\t",a[i]);
 }
return 0;
}

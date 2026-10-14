#include<stdio.h>
//  wap to find the smallest number in an array
int main()
{
 int i,a[20];
 int small;

 printf("Enter 10 elements in an array:");
 for(i=0;i<10;++i)
 {
    scanf("%d",&a[i]);
 }
 printf("OUTPUT\n");
 for(i=0;i<10;++i)
 {
    printf("%d\n",a[i]);
 }
 small = a[i];
 for(i=0;i<10;++i)
 {
 if(a[i] < small)
 {
    small = a[i];
 }
 }
 printf("Smallest number: %d\n", small);
return 0;
}

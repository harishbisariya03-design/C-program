#include<stdio.h>
// sum of the array elements
int main()
{
 int i,a[20],sum=0;

    printf("Enter 10 elements in an array:\t");
    for(i=0;i<10;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;++i)
    {
        sum=sum+a[i];
    }
    printf("Sum of elements of the array is: %d\n",sum);
return 0;
}

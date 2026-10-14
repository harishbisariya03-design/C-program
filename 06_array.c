#include <stdio.h>

int main() {
    int i,p,a[10];

    printf("Enter 6 elements in an ARRAY:\n");
    for(i=1;i<=6;i++)
    {
        scanf("%d",&a[i]);
    }  
  
    printf(" which position item do you want to delete:");
    scanf("%d",&p);
    for(i=p;i<6;i++)
    {
        a[p]=a[p+1];
    }
    printf("Array after output:");
    for(i=1;i<=5;++i)
    {
        printf("%d ", a[i]);
    }               
    return 0;
}
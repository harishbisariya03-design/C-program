#include <stdio.h>

int main() {
    int i,p,item,a[10];

    printf("Enter 6 elements in an ARRAY:\n");
    for(i=1;i<=6;i++)
    {
        scanf("%d",&a[i]);
    }  
    printf("Which item do you want to insert");
    scanf("%d",&item);
    printf("At which position do you want to insert the item");
    scanf("%d",&p);
    for(i=6;i>=p;i--)
    {
        a[i+1]=a[i];
    }
    a[p]=item;
    printf("Array after output:");
    for(i=1;i<=7;++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
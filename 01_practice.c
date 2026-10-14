#include<stdio.h>
// multiplication table

int main()
{
    int i,n;
    printf("Which table do you want to display ?\n");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
return 0;
}

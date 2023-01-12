/*
8. Write a program to print squares of the first N natural numbers
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        printf("%d ",i*i);
    }
    return 0;
}
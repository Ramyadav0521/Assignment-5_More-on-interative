/*
7. Write a program to print the first N even natural numbers in reverse order
*/
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d ",n*2);
        n--;
    }
    return 0;
}
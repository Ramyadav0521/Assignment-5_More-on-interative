/*
1. Write a program to print MySirG N times on the screen

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("MySirG\n");
    }
*/
#include<stdio.h>
int main()
{

    int a=1,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    while (a<=n)
    {
       printf("MySirG ");
       a++;
    }
    
    return 0;
}
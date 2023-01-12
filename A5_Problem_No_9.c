/*
9. Write a program to print cubes of the first N natural numbers
*/
#include<stdio.h>
int main()
{
    int a=1,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        printf("%d ",a*a*a);
    }
    return 0;
}
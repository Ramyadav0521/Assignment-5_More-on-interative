/*
10. Write a program to print a table of N.
*/
#include<stdio.h>
int main()
{
    int a,num;
    printf("\nEnter a number: ");
    scanf("%d",&num);

    for(a=1; a<=num; a++)
    {
        printf("%d ",a*a*a);
    }
    return 0;
}
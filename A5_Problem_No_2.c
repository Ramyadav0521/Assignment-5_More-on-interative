//2. Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int i,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    printf("\nfirst %d natural numbers\n",n);
    printf("For Loop Output: ");
    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
    }
    printf("\nWhile Output: ");
    i=1;
    while (i<=n)
    {
        printf("%d " ,i);
        i++;
    }
    printf("\n ");
    return 0;
}


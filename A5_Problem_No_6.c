/*
6. Write a program to print the first N even natural numbers
*/
#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > i)
    {
        for (i = 1; i <= num; i++)
        {
            printf("%d ", i * 2);
        }
    }
    else
    {
        while (-num > i)
        {
            printf("%d ", -(i * 2));
            i++;
        }
    }
    return 0;
}
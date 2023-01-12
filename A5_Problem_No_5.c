/*
5. Write a program to print the first N odd natural numbers in reverse order.
*/
#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nWhile loop output: ");
    if (num>0)
    {
        while (num)
        {
            printf("%d ", 2 * num - 1);
            num--;
        }
    }
    else
        while (num)
        {
            printf("%d ",2*num+1);
            num++;
        }
        
       
    return 0;
}
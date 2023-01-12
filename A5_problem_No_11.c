/*
10. Write a program to print a table of N.
*/
#include<stdio.h>
int main()
{
    int i,j,num;
    printf("\nEnter a number: ");
    scanf("%d",&num);

    for (i = 1; i <= num; i++)
    {
        printf("Table of %d:\n",i);
        for (j = 1; j <= 10; j++)
        {
            printf("%3d   X %3d = %3d\n",i,j,(i*j)); 
        }
        printf("\n\n");
    }
    return 0;
}
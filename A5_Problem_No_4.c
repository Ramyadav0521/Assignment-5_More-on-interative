#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    while (n)
    {
        printf("%d \n",i);
        i++;
        if (i>n)
        {
           break;
        }   
    }
    return 0;
    
}
/*
3. Write a program to  print the first N natural numbers in reverse order
*/
#include<stdio.h>
int main()
{
   int n,i=1;
   printf("\nEnter a natural number: ");
   scanf("%d",&n);
   i=n;
   printf("\n\nwhile loop output: ");
   while (i)
   {
        printf("%d ",i);
        i--;
   }

   printf("\n\nFor loop output: ");
  
   for(i=n; i>0; i--)
   {
      printf("%d ",i);
   }
   return 0;
}
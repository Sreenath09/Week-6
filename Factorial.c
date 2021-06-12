#include <stdio.h>
int main()
{
 int n, i,f=1; //variables declaration

printf("Enter a number: "); //asking your to enter a number
 scanf("%d",&n); //reading entered number

// showing error message, if the entered number is a negative number
 if (n < 0)
printf("Factorial of a negative number doesn't exist.");
else
 {
   for(i=1;i<=n;++i)//finding factorial using for loop
   {
      f=f*i;
   }
printf("Factorial of %d = %d", n,f);
 }
return 0;
}

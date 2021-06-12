#include<stdio.h>
int main()
{
   int i,m,n,flag=0;
printf("Enter a number to be checked");
scanf("%d",&n);

m=n/2;
for (i = 2; i <= m; ++i)
{
    // condition for non-prime
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
}
if(flag == 0)
 printf("%d is a prime number.", n);
    else
 printf("%d is not a prime number.", n);

  return 0;
}

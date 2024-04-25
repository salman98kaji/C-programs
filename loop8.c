#include<stdio.h>
#include<stdbool.h>

bool isPrime(int num)
{
    if (num<2)
    {
        return false;
    }
    for( int i=2;i*i<=num;i++)
    {
        if (num % i == 0)
        {
          return false;
        }
    }
    return true;
}
void printPrimes(int n)
{
    printf("the prime number till %d is :",n);
    for (int i=2; i<=n; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    printPrimes(num);
}
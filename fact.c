#include<stdio.h>

    unsigned long long factorial(int n)
    {
    if ( n==0 || n==1)
    {
       return 1;
    }
    
    else
    {
       unsigned long long result=1;
       for( int i=2;i<=n;i++)
       {
        result*=i;
       }
       return result;
    }

}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    unsigned long long fact=factorial(num);
    printf("The factorial of the number %d is :%llu",num,fact);
}
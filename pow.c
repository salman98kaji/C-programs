#include<stdio.h>
long long power(int x, int n)
{
    long long result=1;
    for (int i=0;i<n;i++)
    {
        result*=x;
    }
    return result;
}
int main()
{
    int x,n;
    printf("Enter the base (x) :\n");
    scanf("%d",&x);
    printf("Enter the exponent (n) :\n");
    scanf("%d",&n);
    long long result = power(x,n);
    printf("%d to the power %d is : %lld", x,n,result);
    return 0;
}
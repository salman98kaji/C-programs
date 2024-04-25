#include<stdio.h>
void calculateFactors(int num)
{
    printf("factors of the number %d are :",num);
    for ( int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d",i);
        }
    }

}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);
calculateFactors(n);
}
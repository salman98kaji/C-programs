#include<stdio.h>
int main()
{
    char ch;
    int n;
    printf("Enter a character :");
    scanf("%c",&ch);
    printf("Enter an integer :");
    scanf("%d",&n);
    printf("The next %d character are : %c",n,ch);
    for (int i=0;i<n;i++)
    {
        printf("%c",ch+i+1);
        
    }
}


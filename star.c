#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
//When i is 1, the inner loop condition j<i is false, and hence the inner loop won't execute. Thus, no asterisks will be printed for the first row.
//When i is 2, the inner loop will run once (j=1). It prints one asterisk.
//When i is 3, the inner loop will run twice (j=1 and j=2). It prints two asterisks.
//This pattern continues until i reaches 5, printing a row of increasing asterisks each time, forming a triangular shape.
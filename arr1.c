#include<stdio.h>

void findLargestandSmallest(int arr[], int n, int *largest, int *smallest)
{
    *largest=arr[0];
    *smallest=arr[0];

    for( int i=1;i<n;i++)
    {
        if (arr[i] > *largest)
        {
            *largest=arr[i];
        }
        if (arr[i] < *smallest)
        {
            *smallest=arr[i];
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the %d element : ",n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest,smallest;
    findLargestandSmallest(arr,n, &largest, &smallest);
    int range = largest - smallest;
    printf("the largest number is : %d\n",largest);
    printf("the smaleest number is : %d\n", smallest);
    printf("the ange of the aaray is : %d\n",range);
}

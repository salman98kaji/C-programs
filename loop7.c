#include<stdio.h>
#include<math.h>
#define PI 3.149

float circleArea(float radius)
{
    return PI * radius*radius;
}
float rectArea(float length, float width)
{
    return length * width;
}
float triArea(float base, float height)
{
    return 0.5*base *height;
}
 int main()
 {
    int choice;
    float radius,length,width,base,height;
    do 
    {
        printf("-------Menu-------\n");
        printf("1) Find area of circle: \n");
        printf("2) Find area of rectangle : \n");
        printf("3) Find arae of traiangle : \n");
        printf("4) Exit. \n");
        printf("Enter Your choice: \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter the radius :\n");
            scanf("%f",&radius);
            printf("the area of the circle is: %.2f\n",circleArea(radius));
            break;
            case 2:
            printf("Enter the length and width fo the recrtangle :\n");
            scanf("%f %f", &length,&width);
            printf("The area of the recrgable is : %.2f\n",rectArea(length,width));
            break;  
            case 3:
            printf("Enter the base and height of the traingle :\n");
            scanf("%f %f", &base,&height);
            printf("The area of the triangle is : %.2f\n",triArea(base,height));
            break; 
            case 4:
            printf("Exit\n");
            break;
            default: 
            printf("Invalid Option. select a avalid option\n");
        }
    }
    while (choice!=4);
    return 0;
 }

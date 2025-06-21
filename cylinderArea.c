#include<stdio.h>
int main()
{
    float radius,height;
    printf("Enter the radius of the cylinder:");
    scanf("%f",&radius);
    printf("Enter the height of the cylinder :");
    scanf("%f",&height);
    printf("Surface area of cylinder = %.2f",(((2*3.14)*(radius*radius))+((2*3.14)*(radius*height))));
    printf("\nVolume of cylinder = %.2f",3.14*(radius*radius)*(height));
    return 0;
}
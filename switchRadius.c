#include<stdio.h>
int main()
{
    // float radius;
    int choice,radius;
    printf("enter the radius :");
    scanf("%d",&radius);
    printf("1.Area of a circle");
    printf("\n2.circumference of a circle");
    printf("\n3.volume of a sphere");
    printf("\nenter choice :");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("area of a circle is:%d",3.14*(radius*radius));
        break;
        case 2:
        printf("circumference of a circle is:%d",2*(3.14*radius));
        break;
        case 3:
        printf("volume of a sphere is :%.d",(1.333*3.140)*(radius*radius)*(radius));
        break;
        default: printf("invalid choice");
    }
    return 0;
}
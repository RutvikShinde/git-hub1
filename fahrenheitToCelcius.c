#include<stdio.h>
int main ()
{
    float fahrenheit,Celcius,kelvin;
    printf("Enter Fhrenheit:");
    scanf("%f",&fahrenheit);
    Celcius=5/9*fahrenheit-32;
   kelvin= Celcius+273.15;
    printf("Celcius = %.2f",Celcius);
    printf("\nKelvin = %.2f",kelvin);
    return 0;
} 
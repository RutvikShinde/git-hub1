#include<stdio.h>
#include<math.h>
int main ()
{
    int n,count=0,temp,rem;
    float result=0; //used float becuase pow used below is double datatype
    printf("enter a number");
    scanf("%d",&n);
    temp=n; //backup
    while(n>0)
    {
        count++;
        n/=10;
    }
    n =temp; //restore the value of n
    while(n>0)
    {
        rem = n%10;
        result=result+pow(rem,count);
        n/=10;
    }
    if (result==temp)
    {
        printf("is a armstrong number");
    }
    else
    {
        printf(" is not a armstrong number");
    }
    return 0;

}
#include<stdio.h>
int main()
{
    int rollNo;
    char sub1[300],sub2[300],sub3[300],name[300];
    float m1,m2,m3,total,avg;
    char grade;
    printf("Enter student details:\n");
    printf("enter roll number: ");
    scanf("%d",&rollNo);
    printf("\nenter student name:");
    scanf("%s",&name);
    printf("\nSubject 1 name:");
    scanf("%s",sub1);
    printf("\nSubject 2 name:");
    scanf("%s",sub2);
    printf("\nSubject 3 name:");
    scanf("%s",sub3);
    printf("\nenter marks of subject 1:");
    scanf("%f",&m1);
    printf("\nenter marks of subject 2:");
    scanf("%f",&m2);
    printf("\nenter marks of subject 3:");
    scanf("%f",&m3);
    total =m1+m2+m3;
    avg =total/3;
    if (avg<=100 && avg>=85)
    grade ='A';
    else if (avg<=84 && avg>=75)
    grade ='B';
    else if (avg<=74 && avg>=50)
    grade='C';
    else if (avg<=49 && avg>=35)
    grade ='D';
    else 
    grade='F';
    printf("Roll number:%d",rollNo);
    printf("\n Student name:%s",name);
    printf("\n Subject 1:%s",sub1);
    printf("\n Subject 2:%s",sub2);
    printf("\n Subject 3:%s",sub3);
    printf("\nsubject 1 marks:%.2f",m1);
    printf("\nsubject 2 marks:%.2f",m2);
    printf("\nsubject 3 marks:%.2f",m3);
    printf("\nTotal marks:%.2f",total);
    printf("\naverage:%.2f",avg);
    printf("\ngrade:%c",grade);
    return 0;


}
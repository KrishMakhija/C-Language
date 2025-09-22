    #include<stdio.h>
#include<string.h>

struct Student_Data
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct Student_Data s1;
    printf("Enter the name of first student: ");
    scanf("%s",&s1.name);
    printf("Enter the roll no. of first student: ");
    scanf("%d",&s1.roll);
    printf("Enter the cgpa of first student: ");
    scanf("%f",&s1.cgpa);

    struct Student_Data s2;
    printf("Enter the name of second student: ");
    scanf("%s",&s2.name);
    printf("Enter the roll no. of second student: ");
    scanf("%d",&s2.roll);
    printf("Enter the cgpa of second student: ");
    scanf("%f",&s2.cgpa);

    struct Student_Data s3;
    printf("Enter the name of third student: ");
    scanf("%s",&s3.name);
    printf("Enter the roll no. of third student: ");
    scanf("%d",&s3.roll);
    printf("Enter the cgpa of third student: ");
    scanf("%f",&s2.cgpa);

    printf("details of first student are: %s, %d, %f\n",s1.name,s1.roll,s1.cgpa);
    printf("details of second student are: %s, %d, %f\n",s2.name,s2.roll,s2.cgpa);
    printf("details of third student are: %s, %d, %f\n",s3.name,s3.roll,s3.cgpa);    
}

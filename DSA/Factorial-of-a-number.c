#include<stdio.h>
int main()
{
    int a,b=1;
    printf("Enter The Number: ");
    scanf("%d",&a);
    printf("Factorial of the number is: ");
    
    while(a>=1)
        {
        b=b*a;
        a--;
    }
    printf("%d",b);
    return 0;
}

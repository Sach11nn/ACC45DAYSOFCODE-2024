#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first side of triangle:");
    scanf("%d",&a);
    printf("Enter the second side of triangle:");
    scanf("%d",&b);
    printf("Enter the third side of triangle:");
    scanf("%d",&c);
    
    if (a==b && b==c)
    {
        printf("Equilateral triangle:");
    }
    else if (a==b || b==c || b==c)
    {
        printf("Scalen triangle");
    }
    return 0;
}
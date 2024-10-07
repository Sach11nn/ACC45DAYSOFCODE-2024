#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first side of triangle:");
    scanf("%d",&a);
    printf("Enter the second side of triangle:");
    scanf("%d",&b);
    printf("Enter the third side of triangle:");
    scanf("%d",&c);
    
    if (a+b>c && b+c>a && c+a>b)
    {
        printf("Triangle is valid ");
    }
    else
    {
        printf("Triangle is not valid");
      }
      return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    float X;
    printf("Enter the number of friends:");
    scanf("%d",&N);
    printf("Enter the cost of one subscription:");
    scanf("%f",&X);
    
    int subscriptionneeded = (N+5)/6;
    float totalcost = subscriptionneeded*X;
    
    printf("Minimum total cost: %.2f rupees\n",totalcost);
    return 0;
    
}


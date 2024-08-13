#include <stdio.h>

int main()
{
    int a, i, sum=0;
    float avg ;
    printf("Enter 5 no.s");
    
    for(i=0;i<5;i++)
    {
        scanf("%d ",&a);
        sum=sum+a;
    }
    avg=sum/5;
    printf("Avg of %f",avg);
    
    return 0;
}

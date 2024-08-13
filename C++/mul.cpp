
#include <stdio.h>
int mult()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d,%d",&x,&y);
    int z=x*y;
  //  printf("Multiplication of %d and %d is %d",x,y,z);
    return(z);
}
int main()
{
    mult();
    int a =mult();
    printf("Multiplication is %d",a);
    return 0;
}

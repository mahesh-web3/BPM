int sum(int x ,int y)
{
    int z=x+y;
    return(z);
}
int main()
{
    int a,b,c;
    printf("Enter two values");
    scanf("%d,%d",&a,&b);
    c=sum(a,b);
    printf("Addition is %d",c);
    c=sum(14,25);
    printf("\nAddition is %d",c);
    return 0;
}

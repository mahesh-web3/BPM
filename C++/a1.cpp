{
    int a ,i;
    printf("Enter no.");
    scanf("%d",&a);
    printf("Table of %d is \n", a);
    
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",a,i,a*i);
    }
    return 0;
}

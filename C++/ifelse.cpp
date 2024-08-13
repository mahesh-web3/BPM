 #include <stdio.h>

int()
{
  int a, b, c;
  printf("Enter 3 no.s");
  scanf("%d,%d,%d",&a,&b,&c);
  if(a>b)
  {
      if(a>c)
      printf("%d is greater",a);
  }
  else
  if(b>c)
  {
      if(b>a)
      printf("%d is greater",b);
  }
  else
  printf("%d is greater",c);
  
  return 0;
}

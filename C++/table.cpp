# include <iostream>
  int main()
  {
      int a,i=1;
      printf("Enter any no.");
      scanf("%d",&a);
      printf("Table of %d is \n",a);
      while(i<=11)
      {
          printf("%d * %d = %d \n",a,i, a*i);
          i++;
      }
      return 0;
  }

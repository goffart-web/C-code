#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c ;
   printf("Enter any three integer numbers: ") ;
   scanf("%d%d%d", &a, &b, &c) ;
      if( a>=b && a>=c)
        printf("%d is the largest number", a) ;
            else if (b>=a && b>=c)
        printf("%d is the largest number", b) ;
            else
        printf("%d is the largest number", c) ;
    return 0;
}

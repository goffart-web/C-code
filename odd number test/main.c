#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("Enter any integer number:\n") ;
   scanf("%d", &n) ;
   if ( n%2 == 0 )
      printf("Given number is EVEN\n") ;
   else
      printf("Given number is ODD\n") ;

    return 0;
}

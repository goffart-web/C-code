#include <stdio.h>
#include <stdlib.h>

int main()
{
       int n ;
   printf("Even numbers up to 10\n");

   for( n = 0 ; n <= 10 ; n++ )
   {
      if( n%2 == 0)
         printf("%d\t", n) ;
   }

   getch() ;

    return 0;
}

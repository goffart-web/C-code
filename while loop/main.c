#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
   printf("Even numbers up to 100\n");

   while( n <= 100 )
   {
      if( n%2 == 0)
         printf("%d\t", n) ;
      n++ ;
   }
      getch() ;

    return 0;
}

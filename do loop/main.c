#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 52;
   printf("Even numbers up to 50\n");
      do
   {
      if( n%2 == 0)
         printf("%d\t", n) ;
      n++ ;
   }while( n <= 50 ) ;
      getch() ;

    return 0;
}

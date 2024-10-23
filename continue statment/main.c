#include <stdio.h>
#include <stdlib.h>

int main()
{
       int number ;
   while( 1 )
   {
       printf("Enter any integer number: ") ;
       scanf("%d", &number) ;
       if(number%2 == 0)
       {
           printf("Entered number is EVEN!!! Try another number!!!\n") ;
           continue ;
       }
       else
       {
           printf("You have entered ODD number!!! Bye!!!") ;
           exit(0) ;
       }
   }
   getch() ;

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
     char ch ;
   do
   {
       printf("Enter Y / N : ") ;
       scanf("%c", &ch) ;
       if(ch == 'Y')
       {
           printf("Okay!!! Repeat again !!!\n") ;
       }
       else if
       {
           printf("Okay !!! Breaking the loop !!!") ;
           break ;
       }
   } while( 1 ) ;
   getch() ;

    return 0;
}

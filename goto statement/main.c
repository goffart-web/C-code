#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("We are at first printf statement!!!\n") ;
   goto last ;
   printf("We are at second printf statement!!!\n") ;
   printf("We are at third printf statement!!!\n") ;
   last: printf("We are at last printf statement!!!\n") ;
   getch() ;

    return 0;
}

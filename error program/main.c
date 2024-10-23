#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 9 ;
    const int x = 10 ;

    i = 9 ;
    x = 100 ; // creates an error
    printf("i = %d\nx =%d", i,x);

}

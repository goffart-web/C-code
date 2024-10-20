#include <stdio.h>
#include <stdlib.h>

int main()
// using a formula calculation
{
    int principal=0, rate=0, time=0;
    printf("inter principals :");
    scanf("%d",&principal);
    printf("inter rate :");
    scanf("%d",&rate);
    printf("inter time :");
    scanf("%d",&time);
    int  interest=(principal*rate*time/100);
    printf("output : %d", interest);
    return 0;
}

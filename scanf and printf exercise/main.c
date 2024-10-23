#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name, address;
    printf("enter your name\n");
    printf("enter your address\n");
    second();
    return 0;
}

// suppose a and b are integers
int second()
{
    int a,b;
    printf("enter any two numbers :");
    scanf("%d%d",&a,&b);
    int c= a+b;
    printf("the sum is %d :" ,c);
    return 0;
}

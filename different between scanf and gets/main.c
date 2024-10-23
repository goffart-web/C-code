#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your first name and last name: \n");
    char str[100];
    gets(str);
    printf("Using gets(): My name is %s \n",str);
    printf("Enter your first name and last name again: \n");
    scanf("%s",str);
    printf("Using scanf(): My name is %s", str);
    return 0;
}

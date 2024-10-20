#include <stdio.h>
#include <stdlib.h>

int main()
// convert of degrees to fahrenheit
// and vis verse
{
    int cell=0;
    printf("enter celsius value :");
    scanf("%d",&cell);
    int farh=(cell*9/5)+32;
    printf("farh: %d \n" ,farh);
    second();
    return 0;
}

int second(){
 int fahr=0;
 printf("enter the farh value: ");
 scanf("%d",&fahr);
 int cell=(fahr-32)*5/9;
 printf("cell: %d",cell);
  return 0;
}

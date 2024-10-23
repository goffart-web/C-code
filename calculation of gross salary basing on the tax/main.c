#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gross, percentage, tax, net;
		printf("\nEnter Gross Salary: ");
		scanf("%f",&gross);
		printf("Enter the tax percentage: ");
		scanf("%f",&percentage);
        		tax = (percentage/100) * gross;
		net = gross - tax;
		printf("\nTaxes withheld: %.2f\n", tax);
		printf("\nNet Salary: %.2f\n", net);

    return 0;
}

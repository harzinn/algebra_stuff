/*	Nick
	Feb 6 2022
	Algebric unit conversion from mps to fps
*/

#include <stdio.h>

int main(void)
{
	double n = 0.0;

	printf("What value to calculate for miles per hour to feet per second\n");
	scanf("%lf", &n);

	printf("\n%lf miles per hour translates to %lf feet per second\n", n, (n * 5280/ 3600));
	
	return 0;
}

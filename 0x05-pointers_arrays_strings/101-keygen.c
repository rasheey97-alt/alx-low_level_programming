#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - original function
 * @n: new varirable
 *
 * return 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand();
	printf("Tada! Congrats %c\n", n);

return (0);
}

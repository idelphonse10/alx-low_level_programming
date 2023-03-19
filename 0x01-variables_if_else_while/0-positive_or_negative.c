#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *main - Print if the nu,ber is negative or positive or zero
 *
 *Return: always 0(Success)
 */

int main(void)
{
int n;

srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	switch (n > 0)
		{
			case (1):
				printf("%d is positive\n", n);
				break;
			case (0):
				switch (n < 0)
					{
						case (1):
							printf("%d is negative\n", n);
							break;
						case (0):
							printf("%d is zero\n", n);
							break;
					}
				break;
		}
		return (0);
}

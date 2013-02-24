// K&R 1.4
#include <stdio.h>

main()
{
	float f, c;
	float lower, upper, step;

	lower = -40;
	upper = 120;
	step = 5;

	printf( "%3s %6s\n", "C", "F" );
	for (c = lower; c <= upper; c += step)
		printf( "%3.0f %6.1f\n", c, c*9.0/5+32 );
}
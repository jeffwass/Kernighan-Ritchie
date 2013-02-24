// K&R 1.08

#include <stdio.h>

main()
{
	int tab, space, newline, c;

	tab = 0;
	space = 0;
	newline = 0;

	while ((c = getchar()) != EOF)
		switch( c )
		{
			case '\n':
				newline++;
			case '\t':
				tab++;
			case ' ':
				space++;
		};
	printf( "tabs : %d, spaces : %d, newlines : %d\n", tab, space, newline );
}
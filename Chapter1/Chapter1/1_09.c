// K&R 1.09
#include <stdio.h>

#define IN    1
#define OUT	  0

main()
{
	int c, state;


	

	state = OUT;
	while ((c = getchar()) != EOF)
	{
		if (state == IN)
		{
			if (c != '\n')
				state = OUT;
		}
		else
		{
			putchar(c);
			if (c == '\n')
				state = IN;
		}

	}	
}
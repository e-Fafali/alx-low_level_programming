/* #include <stdio.h> */
#include "main.h"

/**
  * _islower - as described
 */

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

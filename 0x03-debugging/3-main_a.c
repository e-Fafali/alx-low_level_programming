#include <stdio.h>
#include "main.h"

/**
 * main - Takes a date and prints out how many days are left in a year,
 * taking leap years into account
 *
 * Return (0);
 */

int main(vooid)
{
	int month;
	int day;
	int year;

	month = 4;
	day = 01;
	year = 1997;

	printf("Date: %02d/%2d/%04d\n", month, day, year);
	
	day = convert_day(month, day);

	print_remaining_days(month, day, year);
	
	return (0);
}

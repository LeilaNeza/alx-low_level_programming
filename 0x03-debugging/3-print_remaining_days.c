#include "main.h"
#include <stdio.h>

/**
 * print_remaining_days - take date prints the number of remaining days
 * taking into account leap years
 * @month: represent the month in number format
 * @day: stands for the day
 * @year: represnts the year
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

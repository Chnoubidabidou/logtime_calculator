#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 6)
		return (printf("\e[36mUsage: <days_in_month> <number_of_weekend_days> <public_holidays> <percent_you_want> <how_many_work_day_per_week>\e[0m\n"), 1);

	// Total Hours
	double	Total_Hours = (atoi(av[1]) - atoi(av[2])) * 7;
	double	Total_Hours_PH = (atoi(av[1]) - atoi(av[2]) - atoi(av[3])) * 7;
	double	Total_Hours_percent = (Total_Hours * atoi(av[4])) / 100;
	double	Total_Hours_PH_percent = Total_Hours_PH * atoi(av[4]) / 100;

	// Hours per week
	double	Hours_per_week = Total_Hours / 4;
	double	Hours_per_week_PH = Total_Hours_PH / 4;
	double	Hours_per_week_percent = Total_Hours_percent / 4;
	double	Hours_per_week_PH_percent = Total_Hours_PH_percent /4;

	// Hours per day
	double	Hours_per_day = Hours_per_week / atoi(av[5]);
	double	Hours_per_day_PH = Hours_per_week_PH / atoi(av[5]);
	double	Hours_per_day_percent = Hours_per_week_percent / atoi(av[5]);
	double	Hours_per_day_PH_percent = Hours_per_week_PH_percent / atoi(av[5]);

	// Total Hours
	printf("Total Hours:\t\t\t\t\t\t\t\t\t%f\th\n", Total_Hours);
	printf("Total Hours with public holidays:\t\t\t\t\t\t%f\th\n", Total_Hours_PH);
	printf("Total Hours for %i%%:\t\t\t\t\t\t\t\t%f\th\n", atoi(av[4]), Total_Hours_percent);
	printf("Total Hours with public holidays for %i%% percent:\t\t\t\t%f\th\n\n", atoi(av[4]), Total_Hours_PH_percent);

	// Hours per week
	printf("Hours per week:\t\t\t\t\t\t\t\t\t%f\th\n", Hours_per_week);
	printf("Hours per week with public holidays:\t\t\t\t\t\t%f\th\n", Hours_per_week_PH);
	printf("Hours per week for %i%%:\t\t\t\t\t\t\t\t%f\th\n", atoi(av[4]), Hours_per_week_percent);
	printf("Hours per week with public holidays for %i%%:\t\t\t\t\t%f\th\n\n", atoi(av[4]), Hours_per_week_PH_percent);

	// Hours per day
	printf("Hours per day for %i work days per week: \t\t\t\t\t%f\th\n", atoi(av[5]), Hours_per_day);
	printf("Hours per day for %i work days per week with the puclic holidays: \t\t%f\th\n", atoi(av[5]), Hours_per_day_PH);
	printf("Hours per day for %i work days per week for %i%%: \t\t\t\t%f\th\n", atoi(av[5]), atoi(av[4]), Hours_per_day_percent);
	printf("Hours per day for %i work days per week with the puclic holidays for %i%%: \t%f\th\n", atoi(av[5]), atoi(av[4]), Hours_per_day_PH_percent);
	return (0);
}
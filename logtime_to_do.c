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


	// Conversion for Total Hours in minutes
	double	Total_Hours_conversion_m = (Total_Hours - (int)Total_Hours) * 60;
	double	Total_Hours_PH_conversion_m = (Total_Hours_PH - (int)Total_Hours_PH) * 60;
	double	Total_Hours_percent_conversion_m = (Total_Hours_percent - (int)Total_Hours_percent) * 60;
	double	Total_Hours_PH_percent_conversion_m = (Total_Hours_PH_percent - (int)Total_Hours_PH_percent) * 60;

	// Conversion for HPW in minutes
	double	Hours_per_week_conversion_m = (Hours_per_week - (int)Hours_per_week) * 60;
	double	Hours_per_week_PH_conversion_m = (Hours_per_week_PH - (int)Hours_per_week_PH) * 60;
	double	Hours_per_week_percent_conversion_m = (Hours_per_week_percent - (int)Hours_per_week_percent) * 60;
	double	Hours_per_week_PH_percent_conversion_m = (Hours_per_week_PH_percent - (int)Hours_per_week_PH_percent) * 60;

	// Conversion for HPD in minutes
	double	Hours_per_day_conversion_m = (Hours_per_day - (int)Hours_per_day) * 60;
	double	Hours_per_day_PH_conversion_m = (Hours_per_day_PH - (int)Hours_per_day_PH) * 60;
	double	Hours_per_day_percent_conversion_m = (Hours_per_day_percent - (int)Hours_per_day_percent) * 60;
	double	Hours_per_day_PH_percent_conversion_m = (Hours_per_day_PH_percent - (int)Hours_per_day_PH_percent) * 60;


	// Conversion for Total Hours in seconds
	int	Total_Hours_conversion_s = (Total_Hours_conversion_m - (int)Total_Hours_conversion_m) * 60;
	int	Total_Hours_PH_conversion_s = (Total_Hours_PH_conversion_m - (int)Total_Hours_PH_conversion_m) * 60;
	int	Total_Hours_percent_conversion_s = (Total_Hours_percent_conversion_m - (int)Total_Hours_percent_conversion_m) * 60;
	int	Total_Hours_PH_percent_conversion_s = (Total_Hours_PH_percent_conversion_m - (int)Total_Hours_PH_percent_conversion_m) * 60;

	// Conversion for HPW in seconds
	int	Hours_per_week_conversion_s = (Hours_per_week_conversion_m - (int)Hours_per_week_conversion_m) * 60;
	int	Hours_per_week_PH_conversion_s = (Hours_per_week_PH_conversion_m - (int)Hours_per_week_PH_conversion_m) * 60;
	int	Hours_per_week_percent_conversion_s = (Hours_per_week_percent_conversion_m - (int)Hours_per_week_percent_conversion_m) * 60;
	int	Hours_per_week_PH_percent_conversion_s = (Hours_per_week_PH_percent_conversion_m - (int)Hours_per_week_PH_percent_conversion_m) * 60;

	// Conversion for HPD in seconds
	int	Hours_per_day_conversion_s = (Hours_per_day_conversion_m - (int)Hours_per_day_conversion_m) * 60;
	int	Hours_per_day_PH_conversion_s = (Hours_per_day_PH_conversion_m - (int)Hours_per_day_PH_conversion_m) * 60;
	int	Hours_per_day_percent_conversion_s = (Hours_per_day_percent_conversion_m - (int)Hours_per_day_percent_conversion_m) * 60;
	int	Hours_per_day_PH_percent_conversion_s = (Hours_per_day_PH_percent_conversion_m - (int)Hours_per_day_PH_percent_conversion_m) * 60;

	// Total Hours
	printf("Total Hours:\t\t\t\t\t\t\t\t\t%f h\tbeing %i h %i m %i s\n", Total_Hours, (int)Total_Hours, (int)Total_Hours_conversion_m, Total_Hours_conversion_s);
	printf("Total Hours with public holidays:\t\t\t\t\t\t%f h\tbeing %i h %i m %i s\n", Total_Hours_PH, (int)Total_Hours_PH, (int)Total_Hours_PH_conversion_m, Total_Hours_PH_conversion_s);
	printf("Total Hours for %i%%:\t\t\t\t\t\t\t\t%f h\tbeing %i h %i m %i s\n", atoi(av[4]), Total_Hours_percent, (int)Total_Hours_percent, (int)Total_Hours_percent_conversion_m, Total_Hours_percent_conversion_s);
	printf("Total Hours with public holidays for %i%% percent:\t\t\t\t%f h\tbeing %i h %i m %i s\n\n", atoi(av[4]), Total_Hours_PH_percent, (int)Total_Hours_PH_percent, (int)Total_Hours_PH_percent_conversion_m, Total_Hours_PH_percent_conversion_s);

	// Hours per week
	printf("Hours per week:\t\t\t\t\t\t\t\t\t%f h\tbeing %i h %i m %i s\n", Hours_per_week, (int)Hours_per_week, (int)Hours_per_week_conversion_m, Hours_per_week_conversion_s);
	printf("Hours per week with public holidays:\t\t\t\t\t\t%f h\tbeing %i h %i m %i s\n", Hours_per_week_PH, (int)Hours_per_week_PH, (int)Hours_per_week_PH_conversion_m, Hours_per_week_PH_conversion_s);
	printf("Hours per week for %i%%:\t\t\t\t\t\t\t\t%f h\tbeing %i h %i m %i s\n", atoi(av[4]), Hours_per_week_percent, (int)Hours_per_week_percent, (int)Hours_per_week_percent_conversion_m, Hours_per_week_percent_conversion_s);
	printf("Hours per week with public holidays for %i%%:\t\t\t\t\t%f h\tbeing %i h %i m %i s\n\n", atoi(av[4]), Hours_per_week_PH_percent, (int)Hours_per_week_PH_percent, (int)Hours_per_week_PH_percent_conversion_m, Hours_per_week_PH_percent_conversion_s);

	// Hours per day
	printf("Hours per day for %i work days per week: \t\t\t\t\t%f h\tbeing %i h %i m %i s\n", atoi(av[5]), Hours_per_day, (int)Hours_per_day, (int)Hours_per_day_conversion_m, Hours_per_day_conversion_s);
	printf("Hours per day for %i work days per week with the puclic holidays: \t\t%f h\tbeing %i h %i m %i s\n", atoi(av[5]), Hours_per_day_PH, (int)Hours_per_day_PH, (int)Hours_per_day_PH_conversion_m, Hours_per_day_PH_conversion_s);
	printf("Hours per day for %i work days per week for %i%%: \t\t\t\t%f h\tbeing %i h %i m %i s\n", atoi(av[5]), atoi(av[4]), Hours_per_day_percent, (int)Hours_per_day_percent, (int)Hours_per_day_percent_conversion_m, Hours_per_day_percent_conversion_s);
	printf("Hours per day for %i work days per week with the puclic holidays for %i%%: \t%f h\tbeing %i h %i m %i s\n", atoi(av[5]), atoi(av[4]), Hours_per_day_PH_percent, (int)Hours_per_day_PH_percent, (int)Hours_per_day_PH_percent_conversion_m, Hours_per_day_PH_percent_conversion_s);
	return (0);
}

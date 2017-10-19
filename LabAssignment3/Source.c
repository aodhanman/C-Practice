#include <stdio.h>

void main() {

	int totalDays;
	int day;
	int month;
	int year;
	int leap = 0;

	printf("Please enter year :\n");
	scanf("%d", &year);

	if (year % 400 == 0) {
		printf("%d is a leap year\n", year);
		leap++;

	}
	else if (year % 100 == 0) {
		printf("%d is not a leap year\n", year);
	}
	else if (year % 4 == 0) {
		printf("%d is a leap year\n", year);
		leap++;

	}
	else {
		printf("Not a leap year\n");
	}

	printf("Please enter day of the month :\n");
	scanf("%d", &day);

	printf("Please enter month :\n");
	scanf("%d", &month);

	switch (month) {
	case 1:
		totalDays = day;
		break;
	case 2:
		totalDays = day + 31;
		break;
	case 3:
		totalDays = day + 59 +leap;
		break;
	case 4:
		totalDays = day + 90 + leap;
		break;
	case 5:
		totalDays = day + 120 + leap;
		break;
	case 6:
		totalDays = day + 151 + leap;
		break;
	case 7:
		totalDays = day + 181 + leap;
		break;
	case 8:
		totalDays = day + 212 + leap;
		break;
	case 9:
		totalDays = day + 243 + leap;
		break;
	case 10:
		totalDays = day + 273 + leap;
		break;
	case 11:
		totalDays = day + 304 + leap;
		break;
	case 12:
		totalDays = day + 334 + leap;
		break;

	default:
		printf("Please enter number between 1-12");
	}

	

	printf("%d \n", totalDays);

	printf("Exit");
	int exit;
	scanf("%d", &exit);
	printf("%d", exit);


}
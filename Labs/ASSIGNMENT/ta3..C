/*
Programmer: HAMZA SHEIKH
DATE: 31/10/23
Description: TO CHECK THE AVAILABILITY OF FLIGHT
*/



#include <stdio.h>

int main() {
	int data[5][4] = {
		{1, 300, 0, 0},
		{1, 320, 1, 310},
		{0, 0, 1, 280},
		{1, 380, 0, 0},
		{1, 375, 1, 400}
	};

	printf("DAY	       MORNING	  PRICE		 EVENING	 PRICE\n");
	for(int day = 0; day < 5; day++) {
		switch(day) {
			case 0: printf("MONDAY  	 ");
				break;
			case 1: printf("TUESDAY	   	 ");
				break;
			case 2: printf("WEDNESDAY     ");
				break;
			case 3: printf("THURSDAY     ");
				break;
			case 4: printf("FRIDAY       ");
				break;
		}
	
		printf("%d$         %d$         %d$         %d$         \n", data[day][0], data[day][1], data[day][2], data[day][3]);
		 
	}

	//THIS SHOWS ALL OF THE MORNING FLIGHTS AVAILABLE

	printf("\nIf Traveller is looking for MORNING flights:\n");
	for(int day = 0; day < 5; day++) {
		if(data[day][0] == 1) {
			switch(day) {
				case 0: printf("MORNING flight is available on Monday for %d$\n", data[day][1]);
					break;
				case 1: printf("MORNING flight is available on Tuesday for %d$\n", data[day][1]);
					break;
				case 2: printf("MORNING flight is available on Wednesday for %d$\n", data[day][1]);
					break;
				case 3: printf("MORNING flight is available on Thursday for %d$\n", data[day][1]);
					break;
				case 4: printf("MORNING flight is available on Friday for %d$\n", data[day][1]);
					break;
			}
		}
	}

	//THIS SHOWS ALL OF THE EVENING FLIGHTS AVAILABLE

	printf("\nIf traveller is looking for EVENING flights:\n");
	for(int day = 0; day < 5; day++) {
		if(data[day][2] == 1) {
			switch(day) {
				case 0: printf("EVENING flight is available on Monday for %d$\n", data[day][3]);
					break;
				case 1: printf("EVENING flight is available on Tuesday for %d$\n", data[day][3]);
					break;
				case 2: printf("EVENING flight is available on Wednesday for %d$\n", data[day][3]);
					break;
				case 3: printf("EVENING flight is available on Thursday for %d$\n", data[day][3]);
					break;
				case 4: printf("EVENING flight is available on Friday for %d$\n", data[day][3]);
					break;
			}
		}
	}


	// THIS PART ASKS THE TRAVELLER FOR A DAY HE WANTS TO BOOK A FLIGHT FOR

	printf("\nIf traveller wants to know about flights on specific day:\n");
	int Inquiry_Day;
	printf("Enter the day (0-4) for which you want to get information about flight: ");
	scanf("%d", &Inquiry_Day);
	
	if(Inquiry_Day >= 0 && Inquiry_Day <= 4) {
		int morning = data[Inquiry_Day][0];
		int evening = data[Inquiry_Day][2];

		printf("Day: ");
		switch(Inquiry_Day) {
			case 0: printf("Monday\n");
				break;
			case 1: printf("Tuesday\n");
				break;
			case 2: printf("Wednesday\n");
				break;
			case 3: printf("Thursday\n");
				break;
			case 4: printf("Friday\n");
				break;
		}
		if(morning == 1) {
			printf("MORNING flight price: %d\n", data[Inquiry_Day][1]);
		} else {
			printf("MORNING flight is not available\n");
		}


		if(evening == 1) {
			printf("EVENING flight price: %d\n", data[Inquiry_Day][3]);
		} else {
			printf("EVENING flight is not available\n");
		}
	}
		else {
			printf("Invalid input\n");
	    }
}//return 0



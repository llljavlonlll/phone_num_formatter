// Javlonbek Butabaev
// cs2750 PA 5
// 11/19/2017

#include <stdio.h>
#include <ctype.h>
#include "phone_fmt.h"

int main()
{
	int i = 0, j = 0;
	char argm[200], tel_num[10];

	printf("\nPlease type your 10 digit phone number\n");
	scanf("%s", argm);
	
	// Loop through user inpt string 
	// and save digits in a new array
	while(argm[i] != '\0') {
	
		if(isdigit(argm[i])) {
			tel_num[j] = argm[i];
			j++;
	
			if(j == 10) {
				break;
			}
		}
		
		i++;
	}

	// Check if there are enough digits
	if(j < 10) {
		printf("ERROR:Not enough digits on input!\n\n");
		return 0;
	}

	// Output the final formatted number	
	phone_fmt(tel_num);
	printf("\n\n");


	return 0;
}

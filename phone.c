#include <stdio.h>
#include <ctype.h>
#include "phone_fmt.h"

int main()
{
	int i = 0, j = 0;
	char argm[200], tel_num[10];

	printf("\nPlease type your 10 digit phone number\n");
	printf("Input: ");
	scanf("%s", argm);

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
	
	printf("Output: ");
	phone_fmt(tel_num);
	printf("\n\n");


	return 0;
}

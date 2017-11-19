#include <stdio.h>
#include <ctype.h>
#include "phone_fmt.h"

int main()
{
	int i = 0, j = 0;
	char argm[200], tel_num[10];

	printf("Please type your 10 digit phone number");
	printf("Input: ");
	scanf("%s", argm);

	printf("%s\n", argm);

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

	for(i = 0; i < 10; i++) {
		printf("%c", tel_num[i]);
	}
	printf("\n");
	
	printf("Output: ");
	phone_fmt(tel_num);


	return 0;
}

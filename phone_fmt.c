#include <stdio.h>
#include <ctype.h>

void phone_fmt(char tel_num[])
{
	int i;

	printf("(");
	for(i = 0; i < 3; i++) {
		printf("%c", tel_num[i]);
	}
	printf(")");
	for(i = 3; i < 6; i++) {
		printf("%c", tel_num[i]);
	}
	printf("-");
	for(i = 6; i < 10; i++) {
		printf("%c", tel_num[i]);
	}

}

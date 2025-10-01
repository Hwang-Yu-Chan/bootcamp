#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 0;
	printf("연도 입력하시오  : ");
	scanf("%d", &a);

	if (a %4 != 0) {
		printf("0");
	}
	if (a % 100 == 0) {
		if (a % 400 == 0) {

			printf("1");
		}
		else {
			printf("0");
		}
		}
	else if (a%4 == 0) {
		printf("1");
	}
}
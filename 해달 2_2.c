#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if (b < 45) {
		b = b + 15;
		if (a == 0) {
			a = 23;
		}
		else {
			a = a - 1;
		}
	}
	else {
		b = b - 45;
		if (a == 0) {
			a = 23;
		}
	}
	printf("%d %d", a, b);
}
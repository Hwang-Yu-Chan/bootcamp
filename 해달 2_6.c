#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 0;
	int b = 0;
	int c = 1;
	int d = 0;
	scanf("%d", &a);
	for (int i = 0;i < a; i++) {
		d = c;
		c = c + b;
		b = d;


	}
	if (a == 0) {
		printf("0");
	}
	else {
		printf("%d", b);
	}
}
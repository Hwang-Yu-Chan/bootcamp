#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 6;
	int b = 4;
	int c = 8;
	printf("%d\n", (a + b) / c);
	printf("%d\n", ((a / c) + (b / c)) / c);
	printf("%d\n", (a * b) / c);
	printf("%d\n", ((a / c) * (b / c)) / c);
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int  k = 0;
	int a = 0;
	scanf("%d", &a);
	for (int i = 0;i < a; i++) {
		for ( k = 0; k < a - i-1; k++) {
			printf(" ");
		}
		for (int q = 0; q < a - k;q++) {
			printf("*");
		}printf("\n");
	}
}



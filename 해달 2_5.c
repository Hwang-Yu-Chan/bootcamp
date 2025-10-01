#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d", &d);
	scanf("%d", &a);
	int e = 0;

	for (int i = 0; i < a;i++) {
		scanf("%d %d",&b,&c);
		e = e + b * c;
	}
	if (e == d) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}
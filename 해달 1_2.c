﻿#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    char ch;

    printf("문자 입력: ");
    scanf("%c", &ch);

    printf("'%c'의 아스키 코드값은 %d \n", ch, (int)ch);

    return 0;
}

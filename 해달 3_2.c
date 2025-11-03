#include <stdio.h>
#include <string.h>

int main(void) {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char s[1001];
        scanf("%s", s);
        int len = strlen(s);
        printf("%c%c\n", s[0], s[len - 1]);
    }

    return 0;
}

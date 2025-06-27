#include "chapter_six.h"

#include <stdio.h>
#include <stdlib.h>

void change(int *dividend) {
    *dividend /= 2;
}

int chapter_six_homework_one() {
    int input = 0;

    scanf("%d", &input);

    change(&input);

    printf("%d\n", input);

    return 0;
}

int chapter_six_homework_two() {

    int buffer_len = 0;
    char* buffer = NULL;

    scanf("%d", &buffer_len);

    buffer = (char*)malloc(buffer_len);

    char c;
    scanf("%c", &c);

    fgets(buffer, buffer_len, stdin);
    printf("%s\n", buffer);

    return 0;
}
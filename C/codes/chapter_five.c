#include "chapter_five.h"

#include <stdio.h>
#include <string.h>

int chapter_five_homework_one() {
    int a[100];
    int a_length = 0; // wait input.

    scanf("%d", &a_length);

    for (int i = 0; i < a_length; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    // start statistics.
    while (a_length--) {
        a[a_length] == 2 ? count++ : 0;
    }

    printf("%d", count);

    return 0;
}

int chapter_five_homework_two() {
    // We don't consider excessively long inputs here.
    char input[100];
    gets(input);

    // reversal.
    int input_length = strlen(input);
    char reversal[100];

    int length = input_length;

    while (input_length--) {
        reversal[length - input_length - 1] = input[input_length];
    }

    int result = strcmp(input, reversal);

    if (result < 0) {
        printf("%d\n",-1);
    }
    else if (result > 0) {
        printf("%d\n", 1);
    }
    else {
        printf("%d\n", 0);
    }

    return 0;
}

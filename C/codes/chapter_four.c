#include "chapter_four.h"

#include <stdio.h>

int chapter_four_homework_one() {

    int input_num = 0;
    int input_num_reversal = 0;

    scanf("%d", &input_num);

    int input_num_back = input_num;

    // start judge num.
    while (input_num) {
        input_num_reversal = input_num_reversal * 10 + input_num % 10;
        input_num = input_num / 10;
    }

    input_num_reversal == input_num_back ? printf("yes") : printf("no");

    return 0;
}

int chapter_four_homework_two() {
    int input_num = 0;
    int factorial = 1;

    scanf("%d", &input_num);

    while (input_num) {
        factorial = input_num * factorial;
        input_num--;
    }

    printf("%d\n", factorial);
    return 0;
}

int chapter_four_homework_three() {
    int ten_num = 1;
    int five_num = 1;
    int two_num = 1;
    int one_num = 1;

    int count = 0;
    for (ten_num = 1; ten_num <= 10; ten_num++) {
        for (five_num = 1; five_num <= 20; five_num++) {
            for (two_num = 1; two_num <= 37; two_num++) {
                for (one_num = 1; one_num <= 37; one_num++) {
                    if (ten_num + five_num + two_num + one_num == 40 && ten_num * 10 + five_num * 5 + two_num * 2 + one_num * 1 == 100) {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d\n", count);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

// 通过公式求解平方根
int main() {
    float num;
    float last_guess;
    float new_guess = 1;

    printf("Enter a number bigger than 0: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Value error!\n");
        return EXIT_FAILURE;
    }

    do {
        last_guess = new_guess;
        new_guess = (last_guess + num / last_guess) / 2;
        printf("New guess: %f\n", new_guess);
        printf("Last guess: %f\n\n", last_guess);
    } while (new_guess != last_guess);

    printf("The square root of %f is %f.\n", num, new_guess);

    return EXIT_SUCCESS;
}
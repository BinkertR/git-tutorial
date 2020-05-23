#include <stdio.h>
#include "espl_lib.h" 


/* main.c */
int main(int argc, char *argv[]) {
    unsigned int input_number;
    char *number_as_word;
    printf("Hello ESPL\n");
    printf("Please enter a Number\n");
    scanf("%u", &input_number);

    number_as_word = num_to_words(input_number);
    printf("You entered %s", number_as_word);

    return 0;
}
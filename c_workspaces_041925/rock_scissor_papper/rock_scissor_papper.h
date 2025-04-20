#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef enum {
    ROCK = 0,
    SCISSOR = 1,
    PAPPER = 2
}Choice;

const char* get_choice_name (Choice choice);

void print_enum();

int rock_scissor_papper();

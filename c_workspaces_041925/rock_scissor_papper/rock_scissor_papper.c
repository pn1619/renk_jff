#include "rock_scissor_papper.h"


const char* Choice_names[] = {
    "ROCK",
    "SCISSOR",
    "PAPPER"
};


const char* get_choice_name (Choice choice){
    return Choice_names[choice];
}

void print_enum(){
    int length = sizeof(Choice_names) / sizeof(Choice_names[0]);
    for (int i = 0; i < length; i++){
        printf("%d: %s\n", i, Choice_names[i]);
    }
    printf("Enter any another number to exit.\n");
}

int rock_scissor_papper(){
    Choice compRandNum = 0;
    Choice yourChoice;
    int intYourChoice = 0;
    
    srand( time( NULL ) );
    
    while (1) {
        printf("===================\n");
        print_enum();
        printf ("Enter your choice: ");
        scanf("%d", &intYourChoice);
        yourChoice = (Choice) intYourChoice;
        if ( yourChoice < 0 || yourChoice > 2 ){
            printf("here");
            break;
        }
        
        compRandNum = rand() % 3;
        printf("Comp choice is: %s\n", get_choice_name(compRandNum));
        printf("Your choice is: %s\n", get_choice_name(yourChoice));
        printf("===================\n");
    }
    return 0;
}
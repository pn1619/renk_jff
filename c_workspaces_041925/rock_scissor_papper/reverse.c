#include "reverse.h"

void reverse(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char *str) {
    reverse(str, str + strlen(str) - 1);
    char *word_begin = str;
    char *temp = str;
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        } else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
}

int reverse_string (){
    char str[] = "This is a string to reverse";
    printf("Original string: %s\n", str);
    reverseWords(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
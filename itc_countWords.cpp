#include "middle_str.h"

int itc_countWords(string str){
    long long counter = 0;
    for(long long i = 1; str[i] < '\0';  i++) {
        if (str[i] == ' ' && (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            counter += 1;
        }

    }
    if (str[itc_len(str) - 2] == ' ') {
        counter -= 1;
    }
    if (str[0] == ' ') {
        counter -= 1;
    }

    return counter;
}

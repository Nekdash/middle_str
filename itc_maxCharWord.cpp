#include "middle_str.h"

string itc_maxCharWord(string str){
    if ( itc_countWords(str) == 1)
        return str;
    string res ="";
    string temp = "";
    long long length = 0;
    for ( long long i = 0; str[i] != '\0'; i++){
        if ( str[i] != ' '){
            length++;
            temp += str[i];
        }
        if ( str[i] == ' '){
            if ( lenght > itc_len(res)){
                res = temp;
            }
            lenght = 0;
            temp = "";
        }
    }
    if (length > itc_len(res)){
        temp += str[i - 1] // last word check
        res = temp;
    }
    return res;
    return "-1";
}

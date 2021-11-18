#include "middle_str.h"

string itc_maxCharWord(string str){
    if ( itc_countWords(str) == 1)
        return str;
    string res ="";
    string temp = "";
    long long length = 0, ad = 0;
    for ( long long i = 0; str[i] != '\0'; i++){
        if ( str[i] != ' '){
            length++;
            temp += str[i];
        }
        if ( str[i] == ' '){
            if ( length > itc_len(res)){
                res = temp;
            }
            length = 0;
            temp = "";
        }
        ad = i;
    }
    if (length > itc_len(res)){
        temp += str[ad - 1]; // last word check
        res = temp;
    }
    return res;
    return "-1";
}

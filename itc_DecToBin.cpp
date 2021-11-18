#include "middle_str.h"

string itc_DecToBin(string str){
    long long i =0, temp_num = 0;
    string temp = "";
    while (str[i] != '\0'){
        if ( itc_isDigit(str[i])){
                temp = "";
            for ( long long j = i; itc_isDigit(str[j]); j++){
                temp += str[j];
            }
        temp_num = str_to_num(temp);
        temp = itc_decToBase(temp_num, 2);
        str = itc_slice_str(str, 0, i -1) + temp + itc_slice(str, j, itc_len(str));
        i = j;
        }else{
            i++;
        }
    }
    return str;
}

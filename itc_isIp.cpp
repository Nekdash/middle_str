#include "middle_str.h"

bool itc_isIp(string str){
    string temp = "";
    bool check = false;
    int ch = 0, num_counter = 0;
    long long temp_num = 0;
    for (long long i = 0; str[i] != '\0'; i++){
            temp ="";
        if(str[i] == '.' && itc_isDigit(str[i + 1]) && itc_isDigit(str[i-1])){
            num_counter++;
            temp = itc_slice_str(str, 0, i -1);
            temp_num = str_to_num(temp);
            if ( temp_num <= 255){
                check = true;
            }
            str = itc_slice_str(str, i + 1, itc_len(str));
        }
        if ( !check || num_counter!= 4){
            return false;
        }
    }
    return true;

}

long long str_to_num(string temp){
    int ch = 0;
    long long temp_num;
    for ( int j = 0; temp[i] != '\0'; i++){
                ch = temp[i] - 48;
                temp_num = temp_num * 10 + ch;
    }
    return temp_num;
}


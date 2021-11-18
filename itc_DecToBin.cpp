#include "middle_str.h"

string itc_int_to_str(long long num){
    char ch = '#';
    string str = "", res = "";
    while(num > 0){
        ch = (num % 10) + 48;
        str += ch;
        num /=10;
    }
    for(long long i = (itc_len(str) - 1); i != 0; i--){
        res += str[i];
    }
    return res;
}


string itc_DecToBin(string str){

    long long i =0, temp_num = 0 ,num = 0;
    string temp = "", temp2 = "";



    while (str[i] != '\0'){
        if ( str[i] < '0' || str[i] > '9'){
            temp2 += itc_decToBase(temp, 2) + str[i];
            res = "";
            }
            if ( itc_isDigit(str[i])){
                temp += str[i];
            }
        i++;
    }
    temp2 += itc_decToBase(new_str, 2);
    return temp2;
}



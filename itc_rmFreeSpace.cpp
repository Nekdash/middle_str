#include "middle_str.h"

string itc_rmFreeSpace(string str){
    long long i = 0;
    long long addon = 0;
    while(str[i] != '\0'){
        if (str[i] == ' '){
            for (long long j = i; str[j] != ' '; j++){
                addon = j;
            }
            str = itc_slice_str(str, 0, i) + itc_slice_str(str, addon + 1, itc_len(str));
        }
        i++;
    }

}

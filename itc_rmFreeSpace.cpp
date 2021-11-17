#include "middle_str.h"

string itc_rmFreeSpace(string str){
    long long i = 0;

    while(str[i] != '\0'){
        if (str[i] == ' '){
            for (long long j = i; str[j] != ' '; j++){

            }
            str = itc_slice_str(str, 0, i) + itc_slice_str(str, j, itc_len(str));
        }
        i =
    }

}

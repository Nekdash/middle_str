#include "middle_str.h"

bool itc_isFirstInSecond(string s1, string s2){
    bool check = false;
    for ( long long i =0; s1[i] != '\0'; i++){
        check = false;
        for ( long long j = 0; s2[j] != '\0'; j++){

            if ( s1[i] == s2[j]){
                s2 = itc_slice_str(s2, 0 , j-1) + itc_slice_str(s2, i+1, itc_len(s2));
                check = true;
            }
        }
        if (!check){
            return false;
        }

    }
    return true;

}

#include <iostream>
#include "middle_str.h"
using namespace std;

void test(){
    string isDigit = "NO", toUpper = "NO", changeCase = "NO", compare = "NO", countWords = "NO", maxCharWord = "NO",
            sameChar = "NO", isFirstInSecond = "NO", Cezar = "NO", rmFreeSpace = "NO", isIp = "NO", DecToBin = "NO", decToBase = "NO";

    if (itc_isDigit('5') == 1 && itc_isDigit('U') == 0) isDigit = "OK";



    cout << "---------------------------------" << endl;
    cout << "1 itc_isDigit" << ":" << "        " << isDigit << endl;
    cout << "---------------------------------" << endl << endl;

    if (itc_toUpper('u') == 'U' && itc_toUpper('U') == 'U') toUpper = "OK";




    cout << "---------------------------------" << endl;
    cout << "2 itc_toUpper" << ":" << "        " << toUpper << endl;
    cout << "---------------------------------" << endl << endl;

    if (itc_changeCase('u') == 'U' && itc_changeCase('U') == 'u' && itc_changeCase('4') == '4') changeCase = "OK";



    cout << "---------------------------------" << endl;
    cout << "3 itc_changeCase" << ":" << "        " << changeCase << endl;
    cout << "---------------------------------" << endl << endl;

    if (itc_compare("hello", "he") == 0 && itc_compare("hello", "hello") == 1) compare = "OK";



    cout << "---------------------------------" << endl;
    cout << "4 itc_compare" << ":" << "        " << compare << endl;
    cout << "---------------------------------" << endl << endl;


    if (itc_countWords(("hello")) == 1 && itc_countWords("#") == 0 && itc_countWords("I like computer science.") == 4) countWords = "OK";



    cout << "---------------------------------" << endl;
    cout << "5 itc_countWords" << ":" << "        " << countWords << endl;
    cout << "---------------------------------" << endl << endl;


    if (itc_maxCharWord("one two four") == "four" && itc_maxCharWord("one four nine") == "four" && itc_maxCharWord("one,     four,    nine.") == "four" && itc_maxCharWord("onefournine") == "error") maxCharWord = "OK";




    cout << "---------------------------------" << endl;
    cout << "6 itc_maxCharWord" << ":" << "        " << maxCharWord << endl;
    cout << "---------------------------------" << endl << endl;


    if (itc_sameChar("one two fur") == 'o') sameChar = "OK";



    cout << "---------------------------------" << endl;
    cout << "7 itc_sameChar" << ":" << "        " << sameChar << endl;
    cout << "---------------------------------" << endl << endl;

    if (itc_isFirstInSecond("one", "secondone") == 1 && itc_isFirstInSecond("secondone", "one") == 0) isFirstInSecond = "OK";



    cout << "---------------------------------" << endl;
    cout << "8 itc_isFirstInSecond" << ":" << "        " << isFirstInSecond << endl;
    cout << "---------------------------------" << endl << endl;

    if (itc_Cezar("abc", 1) == "bcd" && itc_Cezar("abc", -1) == "zab" && itc_Cezar("abc", 0) == "abc") Cezar = "OK";





    cout << "---------------------------------" << endl;
    cout << "9 itc_Cezar" << ":" << "        " << Cezar << endl;
    cout << "---------------------------------" << endl << endl;


    if (itc_rmFreeSpace("abc     abc 123 33   3") == "abc abc 123 33 3" && itc_rmFreeSpace("1          3") == "1 3") rmFreeSpace = "OK";



    cout << "---------------------------------" << endl;
    cout << "10 itc_rmFreeSpace" << ":" << "        " << rmFreeSpace << endl;
    cout << "---------------------------------" << endl << endl;

    if (itc_isIp("1.1.1.1.") == 0 && itc_isIp("127.0.0.1") == 1) isIp = "OK";




    cout << "---------------------------------" << endl;
    cout << "11 itc_isIp" << ":" << "        " << isIp << endl;
    cout << "---------------------------------" << endl << endl;

    if (itc_DecToBin("192.168.001.255") == "11000000.10101000.1.11111111") DecToBin = "OK";


    cout << "---------------------------------" << endl;
    cout << "12 itc_DecToBin" << ":" << "        " << DecToBin << endl;
    cout << "---------------------------------" << endl << endl;

    if (itc_decToBase(162, 16) == "A2" && itc_decToBase(10, 2) == "1010") decToBase = "OK";



    cout << "---------------------------------" << endl;
    cout << "13 itc_decToBase" << ":" << "        " << decToBase << endl;
    cout << "---------------------------------" << endl << endl;
}

int main() {
    test();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reverse(char* str){
    int n = length(str);
    for(int i = 0; i < n / 2; ++i)
    swap(str, i, n - 1 - i);
    return;
}

void swap(char* s, int left, int right){
    char tmp = s[left];
    s[left] = s[right];
    s[right] = tmp;
    return;
}

int length(const char *str){
    int i = 0;
    while (str[++i]);
    return 0;
}

int ToInteger(char c){
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    else if (c >= 'a' && c <= 'z') return c - 'a' + 10;
    else if (c >= '0' && c <= '9') return c - '0';
    return 0;
}

int ToChar(char c){
    if (c >= 10 && c <= 26) 
    return c + 'A' - 10;
    else if (c >= 0 && c <= 9) 
    return c + '0';
    else return -1;
    return 0;
}

char SumInCC(char* str1, char* str2){
    int len1 = length(str1);
    int len2 = length(str2);
    int len_result = max(len1, len2) + 2;
    return 0;
}

int main(){
    char* str1 = "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    char* str2 = "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001";
    char* str3 = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000FFFF";
    return 0;
}
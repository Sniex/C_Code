/*************************************************************************
	> File Name: 18-4-11_3.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月11日 星期三 18时52分22秒
 ************************************************************************/

#include<stdio.h>

int str_cmp(char str1[], char str2[], int n){
    unsigned long i = 0;
    for (; i < n; ++i) {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
    }
    return 0;
}

int __strncmp(char * arr1, char *arr2, int n) {
    unsigned long i = 0;
    while (i < n && arr1[i] && arr2[i] && arr1[i] == arr2[i]) ++i;    
    if (i == n) return 0;
    return arr1[i] - arr2[i];

}

int _strncpy(char *str1, char *str2, int n){

    int i = 0;
    for (; i < n && str1[i] && str2[i]; ++i) {
        str1[i] = str2[i];
    }
    return 0;
}

int _strlen(char *str) {

}

int main() {
    char str1[] = "11111111111111";
    char str2[] = "22222222222222";
    
    printf("%d\n", __strncmp(str1, str2, 15));
    
    for ( int i = 0; str1[i] ; ++i ) {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}

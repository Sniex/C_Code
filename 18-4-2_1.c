/*************************************************************************
	> File Name: 18-4-2_1.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月02日 星期一 18时40分51秒
 ************************************************************************/

#include<stdio.h>
int tenToone(int arr[], int number){
    int index = 0;
    while (number) {
        arr[index++] = number % 10;
        number /= 10;
    }
    return 0;
}
int ToBinary(){
    int a = 1024;
    int byte[32] = {0};
    for (int i = 31; i >= 0; i-- ) {
        byte[i] = a % 2;
        a = a / 2;
    }

    for ( int j = 0; j < 32; j++ ) {
        printf("%d", byte[j]);
    }
    printf("\n");
    tenToone(byte, 54321);
    
    for ( int j = 0; j < 32; j++ ) {
        printf("%d", byte[j]);
    }
    printf("\n");
    return 0;
}
void print_binary(unsigned int n){
    int num[32] = {0};
    int index = 0;
    while(n){
        num[index++] = n % 2;
        n /= 2;
    }
    for (int i = 31; i >= 0; i--) {
        if (num[i]) {
            printf("\033[0;34m%d", num[i]);
        } else {
            printf("%d", num[i]);
        }
        if(i % 8 == 0){
            printf(" ");
        }
    }
    printf("\033[0m\n");
}
int main(){
    int a = 7421;
    printf("a:\n");
    print_binary(a);
    printf("~a:\n");
    print_binary(~a);
    return 0;
}

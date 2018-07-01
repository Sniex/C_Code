/*************************************************************************
	> File Name: 18-4-4_2.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月04日 星期三 18时25分45秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    switch(n){
        case 1: 
            printf("one\n");
            // break;
        case 2:
            printf("two\n");
            // break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("error\n");
    }
    return 0;
}

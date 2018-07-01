/*************************************************************************
	> File Name: 18-4-4_1.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月04日 星期三 18时08分31秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (!n){
        printf("FOOLISH\n");
    }else if(n < 60){
        printf("FAIL\n");
    }else if (n <= 75){
        printf("MEDIUM\n");
    }else{
        printf("GOOD\n");
    }
    return 0;
}

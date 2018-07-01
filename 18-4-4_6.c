/*************************************************************************
	> File Name: 18-4-4_6.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月04日 星期三 19时14分32秒
 ************************************************************************/

#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int a;
    int b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

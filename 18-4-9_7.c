/*************************************************************************
	> File Name: 18-4-9_7.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月09日 星期一 20时31分30秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a[20];
    int *p = &a[0];
    int n = 7;
    printf("%ld\n", sizeof(p));
    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(n));
    return 0;
}

/*************************************************************************
	> File Name: 18-4-9_1.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月09日 星期一 18时13分19秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int prime[100] = {0};
    for ( int i = 2; i * i <= 100; ++i) {
        if (prime[i]) continue;
        for ( int j = i * i; j <= 100; j += i  ) {
            prime[j] = 1;
        }
    }

    for ( int i = 2; i < 100; ++i ) {
        if (prime[i] == 0) printf("%d\n", i);
    }
    return 0;
}

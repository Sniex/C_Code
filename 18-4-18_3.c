/*************************************************************************
	> File Name: 18-4-18_3.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月18日 星期三 19时17分05秒
 ************************************************************************/

#include<stdio.h>

int is_qual(int n) {
    int tmp = n;
    int sum = 0;
    int eve;
    int eve_sum;
    while (n) {
        eve_sum = 1;
        eve = n % 10;
        for (int i = 1; i <= eve; ++i) {
            eve_sum *= i;
        }
        // printf("%d\n", eve_sum);
        sum += eve_sum;
        n /= 10;
    }
    return sum == tmp;
}

int is_ok(int n, int *num) {
    int sum = 0, tmp = n;
    while(n) {
        sum += num[n % 10];
        n /= 10;
    }
    return tmp == sum;
}

int main () {
    int num[10] = {0};
    num[0] = 1;
    for (int i = 1; i < 10; i++) {
        num[i] = num[i - 1] * i;
    }
    int sum = 0;
    for (int i = 3; i < 2540160; ++i) {
        if (is_ok(i, num)) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}

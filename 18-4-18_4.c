/*************************************************************************
	> File Name: 18-4-18_4.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月18日 星期三 19时33分26秒
 ************************************************************************/

#include<stdio.h>

int is_palin_and_to_binary(int n) {
    int list[20] = {-1};
    int i = 0;
    int j = 0;
    while (n) {
        list[i++] = n % 2;
        n /= 2;
    }
    printf("????");
    for(int k = 0; k < 20; k++) {
        printf("%d ", list[k]);
    }
    printf("\n");
    for (j = 0, i -= 1; j < i; j++, i--) {
        if (list[i] != list[j]) {
            return 0;
        }
    }
    return 1;
}

int is_palin(int n) {
    int list[7] = {-1};
    int index = 0;
    int k = 0;
    while(n) {
        list[index++] = n % 10;
        n /= 10;
    }
    printf("---->%d\n", index);
    for (k = 0, index -= 1; index > k; k++, index--) {
        if (list[k] != list[index]) {
            return 0;
        }
    }
    return 1;
}

int is_pa(int n, int base) {
    int tmp = n;
    int sum = 0;
    while(n) {
        sum = sum * base + n % base;
        n /= base;
    }
    return sum == tmp;
}
int main() {
    int sum = 0;
    for (int i = 1; i < 1000000; i += 2) {
        if(is_palin(i) && is_palin_and_to_binary(i)) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}

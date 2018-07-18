/*************************************************************************
	> File Name: 18-4-18_2.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月18日 星期三 18时53分10秒
 ************************************************************************/

#include<stdio.h>



int main() {
    int ceil = 1000000;
    int sum = 0;
    for (int i = 2; i < ceil; ++i) {
        // printf("???");
        int eve = 0;
        for (int j = i; j; j /= 10) {
            int tmp = j % 10;
            eve += tmp * tmp * tmp * tmp * tmp;
        }
        if (eve == i) {
            sum += eve;
            printf("--->%d\n", eve);
        }
    }
    printf("%d\n", sum);
    return 0;
}

/*************************************************************************
	> File Name: 18-4-4_9.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月04日 星期三 20时33分40秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
int max_int(int num, ...) {
    int ans = 0, temp;
    va_list arg;
    va_start(arg, num);
    while(num--){
        temp = va_arg(arg, int);
        ans = temp > ans ? temp : ans;
    }
    va_end(arg);
    return ans;
}


int main() {
    printf("%d\n", max_int(3, 1, 5, 9));
    printf("%d\n", max_int(4, 1, 5, 9, 10));
    printf("%d\n", max_int(5, 1, 5, 9, 3, 8));
    printf("%d\n", max_int(6, 1, 5, 9, 6, 11, 13));
    return 0;
}

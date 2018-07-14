/*************************************************************************
	> File Name: 18-4-11_1.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月11日 星期三 18时00分26秒
 ************************************************************************/

#include<stdio.h>
int main(int argc, char **argv) {
    for (int i = 0; i < argc; ++i) {
        printf("%p, argv[%d] = %s\n, %i", argv[i], i, argv[i], argv[i]);
    }
        return 0;
}

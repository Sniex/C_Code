/*************************************************************************
	> File Name: 18-4-9_4.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月09日 星期一 19时04分25秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char **argv) {
    for (int i = 1; i < argc; ++i) {
        printf("%s\n", *(argv + i));
    }
    return 0;
}

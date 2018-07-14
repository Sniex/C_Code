/*************************************************************************
	> File Name: 18-4-11_5.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月11日 星期三 20时28分45秒
 ************************************************************************/

#include<stdio.h>

#define MAX(a, b) ({ \
    __typeof(a) temp_a = a;\
    __typeof(b) temp_b = b;\
    (temp_a) > (temp_b) ? (temp_a) : (temp_b);\
    })

#define P(a) printf("[%s:%d - %s] %s = %d\n",__FILE__, __LINE__, __func__, #a, a)

#define PASTE(m, n) m##n

#define AA 1

#ifdef AA
#define DEBUG(format, ...) printf(format, ##__VA_ARGS__)
#else
#define DEBUG(format, ...)
#endif



int main() {
    // int a = 7;
    // printf("MAX(2, 3) = %d\n", MAX(2, 3));
    P(MAX(2, 3));
    P((PASTE(M, AX)(6, 7)));
    DEBUG("hello\n");
    // printf("5 + MAX(2, 3) = %d\n", 5 + MAX(2, 3));
    // printf("MAX(2, MAX(3, 4)) = %d\n", MAX(2, MAX(3, 4)));
    // printf("MAX(2, 3 > 4 ? 3 : 4) = %d\n", MAX(2, 3 > 4 ? 3 : 4));
    // printf("MAX(a++, 6) = %d\n", MAX(a++, 6));
    return 0;
}

/*************************************************************************
	> File Name: 18-4-9_3.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月09日 星期一 18时57分08秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int *p;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    p = a;
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(1 + p));
    printf("%d\n", p[1]);
    printf("%d\n", 1[p]);

    return 0;
}

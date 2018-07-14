/*************************************************************************
	> File Name: 18-4-11_2.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月11日 星期三 18时30分59秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int i = 5, j = 6, k = 7;
    int *ip1 = &i;
    int *ip2 = &j;
    
    printf("&i = %p\n&j = %p\n", &i, &j);

    int **ipp = &ip1;
    printf("ipp = %p\n", ipp);
    printf("ip1 = %p\n", ip1);
    printf("ip2 = %p\n", ip2);
    printf("**ipp = %d\n", **ipp);

    *ipp = ip2;
    printf("**ipp = %d\n", **ipp);
    printf("ipp = %p\n", ipp);
    printf("ip1 = %p\n", ip1);
    printf("ip2 = %p\n", ip2);
    
    
    return 0;
}

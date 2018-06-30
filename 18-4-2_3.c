/*************************************************************************
	> File Name: 18-4-2_3.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月02日 星期一 20时09分42秒
 ************************************************************************/

#include<stdio.h>

void print_binary(unsigned int n){
    int num[32] = {0};
    int index = 0;
    while(n){
        num[index++] = n % 2;
        n /= 2;
    }
    for (int i = 31; i >= 0; i--) {
        if (num[i]) {
            printf("\033[0;34m%d", num[i]);
        } else {
            printf("%d", num[i]);
        }
        if(i % 8 == 0){
            printf(" ");
        }
    }
    printf("\033[0m\n");
}
int main(){
    int a, b, c, d;
    int ip = 1024;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    char *p = (char *)&ip;
    // p[0] = d;
    *p = d;
    // p[1] = c;
    *(p + 1) = c;
    // p[2] = b;
    *(p + 2) = b;
    // p[3] = a;
    // *(p + 3) = a;
    print_binary(a);
    printf("%d\n", ip);
    print_binary(b);
    print_binary(c);
    print_binary(d);
    print_binary(ip);
    return 0;
}

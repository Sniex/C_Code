/*************************************************************************
	> File Name: 18-4-4_8.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月04日 星期三 19时54分40秒
 ************************************************************************/

#include<stdio.h>

int gcd(int n, int m) {
    if (m == 0){
        return n;
    }else{
        return gcd(m, n % m);
    }
}



int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", gcd(n, m));
    return 0;
}

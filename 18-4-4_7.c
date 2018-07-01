/*************************************************************************
	> File Name: 18-4-4_7.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月04日 星期三 19时29分33秒
 ************************************************************************/

#include<stdio.h>

long int ans(int n) {
    if (n == 1 || n == 0){
        return 1;
    }
    else{
        return ans(n - 1) * n;
    }
}

long int ans2(int n, int p) {
    if (n == 1) {
        return p;
    }else {
        return ans2(n - 1, n * p);
    }
}


int main() {
    int n;
    long int fbs = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        fbs *= i;
    }
    printf("for : %ld\n", fbs);
    
    printf("else:  %ld\n", ans(n));

    printf("else2:  %ld\n", ans2(n, 1));
    return 0;
}

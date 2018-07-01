/*************************************************************************
	> File Name: 18-4-4_5.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月04日 星期三 19时08分17秒
 ************************************************************************/

#include<stdio.h>

int line_value(int k, int b, int x){
    return k * x + b;
}

int main(){
    int k, b, x;
    scanf("%d%d", &k, &b);
    for(x = 1; x < 101; ++x){
        printf("%d\n",line_value(k, b, x));
    }
    return 0;
}

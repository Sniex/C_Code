/*************************************************************************
	> File Name: 18-4-9_5.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月09日 星期一 19时36分53秒
 ************************************************************************/

#include<stdio.h>

int main() {
    char day[7][10] = {"Monday", "Tuesday", "Wednesday", "Thurday", "Friday", "Saturday", "Sunday"};
    int n;
    scanf("%d", &n);
    while (n < 1 || n > 7) {
        printf("Input Error! The Number must be in 1-7\n");
        scanf("%d", &n);
    }
    printf("%s\n", day[n - 1]);

    
    return 0;
}

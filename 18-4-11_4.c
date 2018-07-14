/*************************************************************************
	> File Name: 18-4-11_4.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月11日 星期三 19时34分44秒
 ************************************************************************/

#include<stdio.h>

int main() {

    char a[] = "   hello   world haizei ";
    char b[20] = {0};
    int i = 0;
    while (sscanf(a + i, "%s", b) == 1) {
        int read = printf("%s\n", b);
        // printf("%s\n", b);
        i += read;
        while (a[i] == ' '){
            i++;
        }
            
    }
    return 0;
}

/*************************************************************************
	> File Name: 18-4-9_2.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月09日 星期一 18时31分41秒
 ************************************************************************/

#include<stdio.h>

int half_search(int min, int max, int *arr, int x) {
    int mid = (min + max) / 2;
    if (arr[mid] == x){ 
        return mid;
    }
    if (min > max || mid == min || mid == max){
        return -1;
    }
    if (arr[mid] > x) {
        half_search(min, mid, arr, x);
    }
    if (arr[mid] < x) {
        half_search(mid, max, arr, x);
    }
    // return -2;
}

int main() {
    int max, min, n, x, result;
    int array[1000] = {0};
    scanf("%d%d", &n, &x);
    max = n - 1;
    min = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    result = half_search(min, max, array, x);
    printf("%d\n", result);
    if (result != -1) {
        printf("Find it, %d is in %d", x, result);
    }
    else {
        printf("Don`t find it\n");
    }
    return 0;
}

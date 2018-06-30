/*************************************************************************
	> File Name: 18-4-2_2.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月02日 星期一 19时50分20秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    double x = 9.0;
    double rad;
    double r = 360;
    double pie = acos(-1);
    scanf("%lf", &rad);
    double n = pow(x, 1.0 / 3.0);
    printf("%lf\n", n);
    printf("%lf\n", rad / r * 2 * pie);
    return 0;
}

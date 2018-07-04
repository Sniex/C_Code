/*************************************************************************
	> File Name: 18-4-9_6.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月09日 星期一 19时54分56秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int man;
    int computer;
    char play[3][10] = {"scissor", "stone", "cloth"};
    while (1) {
        printf("Please Input a number\n");
        scanf("%d", &man);
        while ( man < 0 || man > 2 ){
            printf("Input Error! Please Input Again! 0 or 1 or 2\n");
            scanf("%d", &man);
        }
        srand((int)time(NULL));
        computer = rand() % 3;
        printf("You: %s\tComputer: %s\n", play[man], play[computer]);
        int res = (man - computer + 4) % 3 - 1;
        if (res == 0) {
            printf("平局\n");
        }
        else if (res > 0) {
            printf("你赢了\n");
        }
        else {
            printf("你输了\n");
        }
    }
    
    return 0;
}

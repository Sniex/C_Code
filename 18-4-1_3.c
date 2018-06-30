/*************************************************************************
	> File Name: 18-4-1_3.c
	> Author: Yu_dong
	> Mail: 1124250973@qq.com
	> Created Time: 2018年04月01日 星期日 20时14分03秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main(){
    // char ch;
    char str[1000]; 
    // int count = 0;
    // while(scanf("%c", &ch) && ch != '\n'){
       //  count++;
    // } 
    //printf("%d\n", count);
    
    freopen("/dev/null", "w", stderr);
    
    while(scanf("%10[^\n]s", str) != EOF){
        getchar();
        // printf("printf %d ", printf("%s\n", str) - 1);
        // printf("%d ", fprintf(stderr, "%s", str));
        printf("\n\n%s\n", str);
    }
    fclose(stderr);
    return 0;
}

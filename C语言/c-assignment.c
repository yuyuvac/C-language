#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//计算器
int main(){
    printf("----计算机----\n");
    printf("请输入不同的数字代表你进行什么运算\n");
    printf("1:加法，2：减法\n");
    printf("3:乘法，4：除法\n");
    int a = 0;
    int c = 0;
    int d = 0;
    scanf("%d", &a);
    if (a == 1) {
        printf("你已进入加法运算\n");
        scanf("%d", &c);
        scanf("%d", &d);
        printf("本次加法的结果是:%d", c + d);
    }
    else if (a == 2) {
        printf("你已进入减法运算\n");
        scanf("%d", &c);
        scanf("%d", &d);
        printf("本次减法的结果是:%d", c - d);
    }
    else if (a == 3) {
        printf("你已进入乘法运算\n");
        scanf("%d", &c);
        scanf("%d", &d);
        printf("本次乘法的结果是:%d", c * d);
    }
    else if (a == 4) {
        printf("你已进入除法运算\n");
        scanf("%d", &c);
        scanf("%d", &d);
        printf("本次除法的结果是:%d", c / d);
    }
    else {
        printf("输入错误,请重新输入");
    }
	return 0;
}
/*爱心作业
int main() {
    printf("    **          **   \n");
    printf(" *******      ******* \n");
    printf("******I LOVE YOU******\n");
    printf("**********************\n");
    printf("  ****************** \n");
    printf("    **************  \n");
    printf("      **********\n");
    printf("        ******\n");
    printf("           *\n");
    return 0;
}
*/
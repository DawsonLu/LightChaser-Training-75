#include <stdio.h>

int main() {
    double num1, num2, result; // 使用double以保留小数精度，如果用int则整数除法会丢小数
    char op;

    printf("请输入表达式 (例如: 5 + 3): ");
    // 注意: %c前面的空格非常重要，它能吃掉缓冲区的换行符或空格
    scanf("%lf %c %lf", &num1, &op, &num2);

    // 使用switch判断运算符
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("结果: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("结果: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("结果: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            // 除数为0的特殊处理
            if (num2 == 0) {
                printf("错误：除数不能为0！\n");
            } else {
                result = num1 / num2;
                printf("结果: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("错误：无效的运算符！\n");
    }

    return 0;
}
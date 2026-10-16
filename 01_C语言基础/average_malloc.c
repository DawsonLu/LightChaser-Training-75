#include <stdio.h>
#include <stdlib.h> // malloc和free需要这个头文件

int main() {
    int n;
    int *arr = NULL;
    double sum = 0.0;

    printf("请输入数组的长度: ");
    scanf("%d", &n);

    // 动态申请内存
    arr = (int*)malloc(n * sizeof(int));
    
    // 安全检查：申请内存失败时malloc返回NULL
    if (arr == NULL) {
        printf("内存申请失败！\n");
        return 1; // 非正常退出
    }

    // 输入数据
    printf("请输入 %d 个整数:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // 边输入边累加
    }

    // 计算平均值 (注意将sum转换为double，否则整数除法会丢失小数)
    if (n > 0) {
        printf("平均值为: %.2lf\n", sum / n);
    } else {
        printf("数组长度为0，无法计算平均值。\n");
    }

    // 释放动态申请的内存（防止内存泄漏）
    free(arr);
    arr = NULL; // 良好的编程习惯：释放后将指针置空，防止变成野指针

    return 0;
}
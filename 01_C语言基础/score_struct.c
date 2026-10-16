#include <stdio.h>

// 定义结构体，包含姓名和分数
struct Student {
    char name[50]; // 姓名
    float score;   // 分数
};

int main() {
    // 声明结构体数组（例如3个学生的成绩单）
    struct Student class_1[3];

    // 输入数据
    printf("请输入3位学生的姓名和分数：\n");
    for (int i = 0; i < 3; i++) {
        printf("请输入第%d位学生的姓名: ", i + 1);
        scanf("%s", class_1[i].name); // 数组名本身就是地址，不需要加&
        printf("请输入第%d位学生的分数: ", i + 1);
        scanf("%f", &class_1[i].score); // float需要加&
    }

    // 打印成绩单
    printf("\n===== 成绩单 =====\n");
    printf("%-15s\t%s\n", "姓名", "分数"); // %-15s 左对齐，占用15个字符宽度
    for (int i = 0; i < 3; i++) {
        printf("%-15s\t%.1f\n", class_1[i].name, class_1[i].score);
    }
    printf("==================\n");

    return 0;
}
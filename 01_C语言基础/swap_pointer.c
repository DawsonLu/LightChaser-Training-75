#include <stdio.h>

// 自定义交换函数，参数接收的是指针 (int*)
// 这里实现的就是最经典的指针交换逻辑
void swap(int *a, int *b) {
    int temp = *a; // 把a指针指向的值存到temp
    *a = *b;       // 把b指针指向的值赋给a指针指向的地址
    *b = temp;     // 把temp的值赋给b指针指向的地址
}

int main() {
    int x = 10;
    int y = 20;

    printf("交换前: x = %d, y = %d\n", x, y);

    // 传递变量的地址(&x, &y)
    swap(&x, &y);

    printf("交换后: x = %d, y = %d\n", x, y);
    return 0;
}
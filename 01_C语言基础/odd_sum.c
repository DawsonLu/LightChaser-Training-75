#include <stdio.h>

int main() {
    int sum = 0; // 用于累加奇数

    // 循环遍历1到100
    // 可以直接从1开始，每次加2，这样就不用判断奇偶了，效率更高
    for (int i = 1; i <= 100; i += 2) {
        sum += i; // 累加
    }

    printf("1到100之间所有奇数的和为: %d\n", sum);
    return 0;
}
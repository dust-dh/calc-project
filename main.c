// Updated on GitHub
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("错误: 除数不能为0\n");
        return 0;
    }
    return a / b;
}

int main() {
    int x = 10, y = 5;
    printf("计算结果: %d + %d = %d\n", x, y, add(x, y));
    printf("%d - %d = %d\n", x, y, subtract(x, y));
    printf("%d * %d = %d\n", x, y, multiply(x, y));
    printf("%d / %d = %d\n", x, y, divide(x, y));
    return 0;
}

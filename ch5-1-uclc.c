#include <stdio.h>
#include <ctype.h>

// 从标准输入读取字符，并把大写字母转成小写字母后从标准输出打印
int main() {
    int ch;
    while ((ch = getchar()) != EOF) {
        putchar(tolower(ch));
    }
}
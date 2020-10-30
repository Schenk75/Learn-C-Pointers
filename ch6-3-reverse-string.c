#include <stdio.h>
#include <stdlib.h>

// 将字符串中参数的字符反向排列
void reverse_string(char *string) {
    char *last_char;

    // 将last_char设置为指向字符串的最后一个字符
    for (last_char=string; *last_char!='\0'; last_char++) {
        ;
    }

    last_char --;

    // 交换指针string和指针last_char所指向的字符
    while (string < last_char) {
        char temp;
        temp = *string;
        *string++ = *last_char;
        *last_char-- = temp;
    }
}
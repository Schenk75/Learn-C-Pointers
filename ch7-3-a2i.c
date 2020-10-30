#include <stdio.h>
#include <stdlib.h>

// 字符串转数字
int ascii_to_integer(char *string) {
    int result;
    result = 0;

    while (*string>='0' && *string<='9') {
        result = result*10 + (*string - '0');
        string ++;
    }

    // 如果字符串中包含非数字字符，则value为0
    if (*string != '\0') {
        result = 0;
    }

    return result;
}
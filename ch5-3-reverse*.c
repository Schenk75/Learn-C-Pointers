#include <stdio.h>
#include <stdlib.h>

// 在一个无符号整数中翻转位的顺序
unsigned int reverse_bits(unsigned int value) {
    unsigned int result;
    unsigned int i;

    result = 0;

    // 为了在各种字长的机器上都能运行，不能采用硬编码来指定位数，而是采用使1不断左移来自动判断字长
    for (i=1; i!=0; i<<=1) {
        // 空出result的下一位
        result <<= 1;
        // 如果当前value的最低位是1，则将result当前的最低位也置为1
        if (value & 1) {
            result |= 1;
        }
        value >>= 1;
    }
    return result;
}
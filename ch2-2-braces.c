#include <stdio.h>
#include <stdlib.h>

// 验证花括号是否成对匹配
void main(){
    int ch;
    int braces = 0;

    while ((ch = getchar()) != EOF){
        if (ch == '{'){
            braces += 1;
        }

        if (ch == '}'){
            if (braces == 0){
                printf("Illegal brace!\n");
            }
            else{
                braces -= 1;
            }
        }
    }

    if (braces == 0){
        printf("Legal brace pairs.\n");
    }
    else{
        printf("Missing right brace!\n");
    }
}
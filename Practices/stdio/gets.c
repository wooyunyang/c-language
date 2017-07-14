/*
Mac中使用Command+d发送流结尾，来终止本程序

通过
./a.out < gets_input.txt
可以用来验证gets舍弃了\n

*/
#include <stdio.h>

int main(void)
{
    char line[80];

    while (gets(line) != NULL) {
        printf("input[%s]", line);
    }
    puts("");
    
    return 0;
}
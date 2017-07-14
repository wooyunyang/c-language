#include <stdio.h>

int main(void)
{
    char line[5];

    puts("Please type a line:");

    gets(line);
    printf("line: %s\n", line);
}
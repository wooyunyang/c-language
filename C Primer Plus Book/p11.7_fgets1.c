#include <stdio.h>

#define STLEN 5

int main(void)
{
    char str[STLEN];
    
    puts("Please type a string:");
    puts("> fgets(str, STLEN, stdin)");
    fgets(str, STLEN, stdin);

    puts("> fputs(str, stdout)");
    fputs(str, stdout);

    puts("> puts(str)");
    puts(str);
}
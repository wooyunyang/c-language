#include <stdio.h>
#include <string.h>

int main(void)
{
    puts("strcmp(\"aa\", \"aa\")");
    printf("%d\n", strcmp("aa", "aa"));

    puts("strcmp(\"aa\", \"ab\")");
    printf("%d\n", strcmp("aa", "ab"));
    
    puts("strcmp(\"ac\", \"ab\")");
    printf("%d\n", strcmp("ac", "ab"));
    
    puts("strcmp(\"ad\", \"ab\")");
    printf("%d\n", strcmp("ad", "ab"));
    
    puts("strcmp(\"aa\", \"a\")");
    printf("%d\n", strcmp("aa", "a"));
    
    return 0;
}
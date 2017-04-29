#include <stdio.h>

int lower(int c)
{
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}

int main()
{
    char c = lower('E');
    printf("%c\n", c);
}
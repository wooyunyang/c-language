#include <stdio.h>
#include <string.h>

#define LEN 10

int main(void)
{
    char name[LEN] = "Daniel";
    char fname[] = "Zhang";
    
    int remainCount = LEN - strlen(name) - 1;
    strncat(name, fname, remainCount);
    puts(name);
    
    return 0;
}
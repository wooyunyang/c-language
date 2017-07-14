#include <stdio.h>
#include <string.h>

int main(void)
{
    char other[] = "ooooo";
    puts(other);

    char name[5] = "12345";
    char fname[] = "Zhang";

    strncpy(name, fname, 4);
    name[4] = '\0';
    puts(name);

    return 0;
}

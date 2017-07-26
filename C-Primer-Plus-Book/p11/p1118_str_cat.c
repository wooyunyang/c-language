#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20] = "Daniel";
    char fname[] = "Zhang";

    strcat(name, fname);

    puts(name);
    puts(fname);
    
    return 0;
}
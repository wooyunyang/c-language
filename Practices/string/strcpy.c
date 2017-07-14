#include <stdio.h>
#include <string.h>

int main(void)
{
    char oname[20] = "Dan Xhang";
    char fname[] = "Zhang";

    char name[20];
    strcpy(name, oname);
    puts(name);

    strcpy(name, fname);
    puts(name);

    strcpy(name, oname);
    
    strcpy(name + 1, fname + 1);
    puts(name);
    
    return 0;
}

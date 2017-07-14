#include <stdio.h>
#include <string.h>

int fit(char* str, unsigned int len);

int main(void)
{
    char log[200] = "Request from Beijing;Time: 2017-07-14.";
    puts("puts(log);");
    puts(log);

    puts("fit(log, 20);");
    fit(log, 20);
    puts("puts(log);");
    puts(log);
    
    puts("puts(log+21)");
    puts(log+21);
    
    return 0;
}

int fit(char* str, unsigned int len)
{
    if (strlen(str) > len) {
        str[len] = '\0';
        return 1;
    }

    return 0;
}

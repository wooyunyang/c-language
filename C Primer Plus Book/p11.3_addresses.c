#include <stdio.h>

#define MSG "Daniel"

int main(void)
{
    char ar[] = MSG;
    const char* pt = MSG;

    printf("address of \"Daniel\": %p\n", "Daniel");
    printf("address of \"Daniel\": %p\n", "Daniel");
    printf("address of MSG: %p\n", MSG);

    printf("value of ar: %p\n", ar);
    printf("value of pt: %p\n", pt);
    
    return 0;
}
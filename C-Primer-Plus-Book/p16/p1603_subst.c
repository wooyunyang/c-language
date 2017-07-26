#include <stdio.h>
#define PSQR(x) printf("The square of " #x " is %d.\n", ((x)*(x))); printf("test\n");

int main(void)
{
    int y = 5;
    PSQR(y+1);
    PSQR(2+4);
    
    return 0;
}
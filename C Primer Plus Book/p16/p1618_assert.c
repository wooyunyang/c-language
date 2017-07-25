#include <stdio.h>
#include <assert.h>

int main(void)
{
    int x = 5;
    x -= 10;
    assert(x < 0);
    assert(1);
    assert(0);

    return 0;
}
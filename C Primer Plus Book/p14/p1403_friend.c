#include <stdio.h>

#define LEN 20

const char* msgs[5] =
{
    "Thank you",
    "You",
    "is a special"
};
struct names {
    char first[LEN];
    char last[LEN];
};
struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow = {
        {"Daniel", "Zhang"},
        "Potato",
        "Dev",
        100000
    };
    
    printf("%s %s loves %s", fellow.handle.first, fellow.handle.last, fellow.favfood);
}



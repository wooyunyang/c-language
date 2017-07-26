#include <stdio.h>

#define LEN 20

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
    struct guy fellow[2] = {
        {
            {"Daniel", "Zhang"},
            "Potato",
            "Dev",
            100000
        },
        {
            {"Xingchao", "Zhang"},
            "Tomato",
            "Dev2",
            100002
        }
    };

    struct guy* him;
    him = &fellow[0];

    printf("&fellow: %p\n", &fellow);
    printf("&fellow[0]: %p\n", &fellow[0]);
    printf("&fellow[1]: %p\n", &fellow[1]);
    printf("him: %p\n", him);
    printf("him + 1: %p\n", him + 1);
    
    printf("fellow[0].income: %f\n", fellow[0].income);
    printf("him->income: %f\n", him->income);
    printf("(*him).income: %f\n", (*him).income);

    printf("&(him->income): %p\n", &(him->income));
}



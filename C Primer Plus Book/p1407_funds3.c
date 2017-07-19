#include <stdio.h>

#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(struct funds moolah);

int main(void)
{
    struct funds stan = {
        "Daniel",
        101.11,
        "Xingchao",
        202.22
    };
    printf("Sum: %.2f\n", sum(stan));
}

double sum(struct funds moolah)
{
    return moolah.bankfund + moolah.savefund;
}
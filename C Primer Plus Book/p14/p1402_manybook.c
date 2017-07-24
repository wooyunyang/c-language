#include <stdio.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  10

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];

    strcpy(library[0].title, "BookA");
    library[0].title[0] = 'C';
    library[0].value = 16.1234;
    library[0].value = 99.1111;

    for (int i = 0; i < 1; i++) {
            printf("Title: %s, Value: %.2f\n", library[i].title, library[i].value);
    }
}
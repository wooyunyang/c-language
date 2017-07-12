#include <stdio.h>
#include <string.h>

#define DENSITY 62.4 // 人体密度

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, What's your weight in pounds?\n", name);
    scanf("%f", &weight);

    volume  = weight / DENSITY;
    letters = strlen(name);
    size    = sizeof name;

    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf(" and we have %d bytes to store it.\n", size);

    return 0;
}

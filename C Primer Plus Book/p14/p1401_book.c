#include <stdio.h>

#define MAXTITL 41 // 书名长度
#define MAXAUTL 31 // 作者姓名长度

// 声明结构：图书
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    // 声明library为book类型
    struct book library;

    puts("Please enter the book title");
    scanf("%s", library.title);
    puts("Please enter the author name");
    scanf("%s", library.author);
    puts("Please enter the value");
    scanf("%f", &library.value);

    printf("Title: %s, Author: %s, Value: %.2f\n", library.title, library.author, library.value);
}
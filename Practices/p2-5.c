#include <stdio.h>

/* 将字符串s2中的任一字符在字符串s1中第一次出现的位置，作为结果返回。*/
int any(char s1[], char s2[])
{
    int index1, index2;
    for (index1 = 0; s1[index1] != '\0'; index1++) {
        for (index2 = 0; s2[index2] != '\0'; index2++) {
            if (s1[index1] == s2[index2]) {
                return index1;
            }
        }
    }
    return -1;
}

int main()
{
    printf("%d\n", any("daniel", "noodle"));
    printf("%d\n", any("zhang", "dig"));
    printf("%d\n", any("zhang", "well"));
    printf("%d\n", any("", "well"));
}




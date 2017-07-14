#include <stdio.h>

/* 删除s1中包含的s2中的任何字符 */
void squeeze(char s1[], char s2[])
{
    int index, newIndex, index2, hasSame;

    newIndex = 0;
    for (index = 0; s1[index] != '\0'; index++) {
        // 遍历
        hasSame = 0;
        for (index2 = 0; s2[index2] != '\0'; index2++) {
            if (s1[index] == s2[index2]) {
                hasSame = 1;
                break;
            }
        }
        if (!hasSame) {
            s1[newIndex++] = s1[index];
        }
    }

    // 末尾
    s1[newIndex] = '\0';
}

int main()
{
    char s1[] = "aabbccdef1234dfgsssdf";
    char s2[] = "ad";
    printf("原字符串：%s\n", s1);
    printf("删除字符串：%s\n", s2);
    squeeze(s1, s2);
    printf("%s\n", s1);
    
    return 0;
}




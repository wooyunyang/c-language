#include <stdio.h>

int main(void)
{
    int arr[5];
    int* p;
    int i;

    for (i=0; i<5; i++) {
        arr[i] = i;
    }

    for (i=0; i<5; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    for (p = &arr[0]; p != &arr[5]; p++) {
        printf("*p: %d\n", *p);
    }
    
    printf("[0]arr: %d\n", 0[arr]);
}
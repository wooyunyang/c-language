#include <stdio.h>

int main(void)
{
    int arr[5];
    int i;
    
    for (i=0; i<5; i++) {
        arr[i] = i;
    }
    
    for (i=0; i<5; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    
    for (i=0; i<5; i++) {
        printf("&arr[%d]: %p\n", i, &arr[i]);
    }
}
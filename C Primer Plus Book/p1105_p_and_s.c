#include <stdio.h>

int main(void)
{
    const char* mesg = "Don't be a fool!";
    const char* copy;
    copy = mesg;
    printf("address of \"Don't be a fool!\": %p\n", "Don't be a fool!");
    printf("pointed string of copy: %s\n", copy);
    printf("pointed string of mesg: %s\n" "&mesg: %p\n" "pointed address of mesg: %p\n", mesg, &mesg, mesg);
    printf("pointed string of copy: %s\n" "&copy: %p\n" "pointed address of copy: %p\n", copy, &copy, copy);
    
    return 0;
}
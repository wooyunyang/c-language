#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[10] = "daniel";
	printf("name is %s\n", name);
	printf("sizeof(name) is %zd\n", sizeof(name));
	printf("strlen(name) is %zd\n", strlen(name));

	return 0;
}
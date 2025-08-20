#include <stdio.h>

int strLength(char *str)
{
    int str_length = 0;

    while (*str != '\0')
    {
        str_length++;
        str += 1;
    }
    return str_length;
}

int main()
{

    char *str = "Hello World";
    int str_length = strLength(str);
    printf("Length of the string is %d", str_length);
    return 0;
}

#include <stdio.h>

int main()
{

    char *str1 = "John";
    char *str2 = "David";
    char *str3 = "Michael";
    char *str4 = "Harry";
    char *str5 = "Doe";

    char *str[] = {str1, str2, str3, str4, str5};

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}

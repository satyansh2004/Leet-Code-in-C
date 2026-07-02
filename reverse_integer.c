#include <stdio.h>

int reverse(int x)
{
    char str[20];

    sprintf(str, "%d", x);

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("\n%c", str[i]);
    // }
    int i = 0;
    int temp;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main(void)
{
    int x = 132;

    reverse(x);
}
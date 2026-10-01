#include <stdio.h>

int reverse(int x)
{
    long power = 1, temp = x, sum = 0, len = 0;

    while (temp != 0)
    {
        temp = temp / 10;
        len++;
    }

    while (x != 0)
    {
        for (int i = 0; i < len - 1; i++)
        {
            power = power * 10;
        }

        long num = (x % 10) * power;
        sum = sum + num;
        power = 1;
        len--;
        x = x / 10;
    }

    if (sum >= 2147483647 || sum <= -2147483648)
    {
        return 0;
    }

    return sum;
}

int main()
{
    printf("%d", reverse(-2147483648));
    return 0;
}
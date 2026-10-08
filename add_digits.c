#include <stdio.h>

int addDigits(int num)
{
    int length = 0, sum = 0, temp = num, ans = 0;

    while (num != 0)
    {
        num = num / 10;
        length++;
    }

    num = temp;

    do{
        int new_len = 0;

        while (num != 0)
        {
            sum = sum + num % 10;
            num = num / 10;
            new_len++;
        }
        length = new_len;
        num = sum;
        sum = 0;
    }  while (length != 1);

    ans = num;
    return ans;
}

void main()
{
    int num = 55;
    printf("%d", addDigits(num));
}
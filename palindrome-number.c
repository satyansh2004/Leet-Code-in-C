#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x)
{
    char snum[30];
    char rev_snum[30];

    char *ptr = snum;
    char *rev_ptr = rev_snum;

    sprintf(snum, "%d", x);

    int size_snum = 0;

    int i = 0;
    while (snum[i] != '\0')
    {
        i++;
        size_snum = i;
    }

    for (int i = 0; i < size_snum - 1; i++)
    {
        ptr++;
    }

    for (int i = 0; i < size_snum; i++)
    {
        *rev_ptr = *ptr;
        ptr--;
        rev_ptr++;
    }

    ptr = snum;
    rev_ptr = rev_snum;

    bool flag = false;

    for (int i = 0; i < size_snum; i++)
    {
        int num1 = *ptr - '0';
        int num2 = *rev_ptr - '0';

        if (num1 != num2)
        {
            flag = false;
            break;
        }
        else
        {
            flag = true;
        }

        ptr++;
        rev_ptr++;
    }

    return flag;
}

int main(void)
{
    printf("The answer is: %d\n", isPalindrome(1000021));
}
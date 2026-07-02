#include <stdio.h>
int lengthOfLongestSubstring(char *s)
{
    int strLen = sizeof(s) / sizeof(char);

    int subStrLen = 1;

    for (int i = 0; i < strLen; i++)
    {
        for (int j = i + 1; j < strLen; j++)
        {
            if (s[i] == s[j])
            {
                goto end;
            }
            subStrLen++;
            printf("\n%c(%d) != %c(%d)", s[i], i, s[j], j);
        }
    }
end:
    printf("\n The length is: %d", subStrLen);
    return 0;
}
int main(void)
{
    char str[] = "pwwkew";
    lengthOfLongestSubstring(str);
}
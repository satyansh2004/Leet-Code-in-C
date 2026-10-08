#include <stdio.h>
#include <stdbool.h>

bool isValid(char *s)
{

  int index = 0, flag = true;

  while (s[index] != '\0')
  {
    index++;
  }

  if (index == 1)
  {
    return false;
  }

  if (s[0] == ']' || s[0] == '}' || s[0] == ')')
  {
    return false;
  }

  for (int i = 0; i < index; i++)
  {
    if (s[i] == '[' && s[index - 1] != ']')
    {
      flag = false;
    }
    else if (s[i] == '{' && s[index - 1] != '}')
    {
      flag = false;
    }
    else if (s[i] == '(' && s[index - 1] != ')')
    {
      flag = false;
    }

    index--;
  }

  for (int i = 0; i < index; i++)
  {
    if (s[i] == '[' && s[i + 1] != ']')
    {
      flag = false;
    }
    else if (s[i] == '{' && s[i + 1] != '}')
    {
      flag = false;
    }
    else if (s[i] == '(' && s[i + 1] != ')')
    {
      flag = false;
    }
  }

  return flag;
}

int main()
{
  char *s = "(){}}{";
  printf("\nResult: %d", isValid(s));
  return 0;
}

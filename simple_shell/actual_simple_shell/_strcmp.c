#include "main.h"
#include <stdio.h>

int _strcmp_custom(const char *str1, const char *str2);

int main(void)
{
  int similar;
  similar = _strcmp_custom("serve","serve");
  if (similar == 0)
    {
      printf("similar");
    }
  else if (similar == 1)
    {
      printf("Not similar");
    }
  return (0);
}
int _strcmp_custom(const char *str1, const char *str2)
{
  int similar = 1;

  while (*str1 == *str2)
    {
      str1++;
      str2++;
      if(*str1 == '\0' && *str2 == '\0')
	{
	  similar = 0;
	  return similar;
	}
      else if(*str1 == '\0' || *str2 == '\0')
	{
	  return similar;
	}
    }
  return similar;
}

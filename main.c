#include <stdio.h>

int main()
{
  int year;
  printf("\nEnter The Year : ");
  scanf("%d", &year);
  if (year % 100 == 0)
  {
    if (year % 400 == 0)
    {
      printf("%d is leap Year\n", year);
    }
    else
    {
      printf("%d is Not leap Year\n", year);
    }
  }
  else
  {
    if (year % 4 == 0)
    {
      printf("%d is leap Year\n", year);
    }
    else
    {
      printf("%d is Not leap Year\n", year);
    }
  }
  return 0;
}

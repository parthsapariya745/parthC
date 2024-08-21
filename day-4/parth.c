#include <stdio.h>

int main()
{
  int f, s, t;

  printf("enter first number : ");
  scanf("%d", &f);

  printf("enter second number : ");
  scanf("%d", &s);

  printf("enter third number : ");
  scanf("%d", &t);

  if (f != s && f != t && s != t)
  {
    if (f < s)
    {
      if (f < t)
      {
        printf("f value is minimum");
      }
      else
      {
        printf("t value is minimum");
      }
    }

    else
    {
      if (s < t)
      {
        printf("s value is minimum");
      }
      else
      {
        printf("t value is minimum");
      }
    }
  }

  else
  {
    printf("This value are same");
  }
}  
#include <stdio.h>

struct{
  unsigned int keyword : 1;
  unsigned int capital : 1;
}flags;

struct{
  unsigned int keyword;
  unsigned int capital;
}normal_flags;

main()
{
  printf("Memory size occupied by flags : %d\n", sizeof(flags));
  printf("Memory size occupied by normal_flags : %d\n", sizeof(normal_flags));
}

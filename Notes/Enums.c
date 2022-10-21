#include <stdio.h>

enum Size // each variable is a number (small = 0, medium = 1... unless number is specified)
{
  Small,
  Medium,
  Large,
  XLarge = 25
};

int main(int argc, char const *argv[])
{
  enum Size shirtSize;
  shirtSize = Medium;
  printf("Shirt size is %d\n", shirtSize);

  return 0;
}

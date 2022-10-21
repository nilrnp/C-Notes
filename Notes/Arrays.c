#include <stdio.h>

int main(int argc, char const *argv[])
{
  // Declaring Arrays (type arrayName[size])
  int numArr[6] = {0, 1, 2, 3, 4, 5};
  numArr[1] = 10;
  printf("%d", numArr[1]);

  // 2D Array
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("\n%d", matrix[i][j]);
    }
  }

  return 0;
}

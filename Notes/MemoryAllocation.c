#include <stdio.h>
#include <stdlib.h> // need for allocation methods

int main(int argc, char const *argv[])
{
  int n = 3;
  int *ptr;

  ptr = (int *)malloc(n * sizeof(int));    // allocates n space (4 bytes per int, so 4*3 = 12bytes allocated)
  ptr = realloc(ptr, n * sizeof(int) + 4); // realloc changes allocated space
  if (ptr == NULL)
  {
    printf("Memory can't be allocated");
    return 0;
  }

  printf("Enter input values:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
  }

  printf("Input values:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", *(ptr + i));
  }

  free(ptr); // allocated space should be freeed once done using

  return 0;
}

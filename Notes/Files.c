#include <stdio.h>

int main(int argc, char const *argv[])
{
  FILE *fptr; // creating file ptr object
  FILE *fptr2;
  fptr = fopen("test.txt", "r"); // assigning file to ptr object, "r" means read. "w" to write
  char content[1000];

  if (fptr != NULL)
  {
    // fgets(content, 1000, fptr); // fgets to read first sentence from file, fgets(where to store,size,where to get info)
    while (fgets(content, 1000, fptr))
    {
      printf("%s", content);
    }
    printf("%s", content);

    fptr2 = fopen("test.txt", "w");
    fputs("Hello", fptr2); // fputs writes to file
  }
  else
  {
    printf("File opened unsuccessfully");
  }

  fclose(fptr); // close files when done using
  fclose(fptr2);
  return 0;
}

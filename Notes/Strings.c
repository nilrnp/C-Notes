#include <stdio.h>
#include <string.h> // for strlen,

int main(int argc, char const *argv[])
{
  // Creating Strings (char name[])
  char str[] = "Hello"; // %s to pring
  printf("%s", str);
  printf("\n%c", str[3]);

  // Inputting String
  char name[20];
  printf("\n Enter your name: ");
  fgets(name, sizeof(name), stdin); // can use scanf, but scan will end lines at a space

  // String Functions
  printf("\n%zu", strlen(str)); // %zu to print
  char strCopy[strlen(str)];
  strcpy(strCopy, str);

  return 0;
}

#include <stdio.h>

int *findValue(int *num) // changing pointer in function will change it in main
{
  *num = 39;
  return num;
}

int main(int argc, char const *argv[])
{
  // Accessing memory
  /*
  int age = 21;
  printf("Address: %p", &age); // %p to print address, & before variable to access its memory address
  */

  // Creating pointers
  /*
  int *ptr = &age; // ptr points to address of age
  printf("\nPointer Address: %p", ptr);
  *ptr = 22;                   // changing pointer value, changes actual value too
  printf("\nValue: %d", *ptr); // * to access actually value in pointer
  printf("\nValue: %d", age);
  */

  // Pointers and Arrays
  /*
  int numArr[6] = {0, 1, 2, 3, 4, 5};
  *numArr = 8; // numArr will always point to index 0
  *(numArr + 4) = 12;
  for (int i = 0; i < 6; ++i)
  {
    printf("%d = %p\n", *(numArr + i), numArr + i); // printing value and array address of each element
  }
  */

  // Pointers and Functions
  int number = 12;
  int *result = findValue(&number);
  printf("%d", *result);
  return 0;
}

#include <stdio.h>
#include <math.h>  // for sqrt, cbrt, pow
#include <ctype.h> // for toupper, tolower

int add(int a, int b); // Function prototype (allows us to implement function after main method)

void greet(int age) // functions are declared above main method
{
  printf("Hi, you are %d", age);
  printf(" years old!");
}

int main(int argc, char const *argv[])
{
  greet(21);
  printf("\n%d", add(2, 3));

  // Standard Library functions
  int a = 8;
  int sqRoot = sqrt(a);
  int cubeRoot = cbrt(a);
  int power = pow(a, 2);

  char letter = 'a';
  char upperCase = toupper(letter);
  char lowerCase = tolower(letter);

  return 0;
}

int add(int a, int b) // functions can take parameters and have a return type
{
  return a + b;
}

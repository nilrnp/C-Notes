#include <stdio.h> // every program should include <stdio.h>
#include <stdbool.h>

int main() // every program should have a main program
{
  // Variables
  /*
  int age = 21;     // %d for printing
  double pi = 3.14; // %lf for printing
  float pi2 = 3.14; // %f for printing
  char a = 'a';     // %c for printing
  */

  // Printing
  /*
  printf("Hello, I am 21 years old\n");      // \n skips to next line
  printf("Age: %d", age);                    // to print variable in c you need a % specifier
  printf("\nPi: %.2lf", pi);                 // .2 says how many decimal points to put in output
  printf("\nSize of int: %zu", sizeof(age)); // to print size of something in bytes use sizeof(), %zu to print
  */

  // User Input
  /*
  int age2;
  printf("\nEnter age: ");
  scanf("%d", &age2); // scanf to read user input, use % specifier and & before variable
  */

  // Operators
  // Arithmetic: +, -, *, /, %, ++, --

  // Type Conversion
  /*
  double b = 43.2;
  int a = (int) b;
  */

  // Boolean Operators, (include <stdbool.h>)
  // Comparison Operators: <, >, <=, >=, ==, !=
  // Logical Operators: &&, ||, !
  /*
  bool val1 = true;
  bool val2 = false;
  */

  // If-Else Statements
  /*
  int age = 21;
  if (age == 21)
  {
    printf("You can finally drink");
  }
  else if (age > 21)
  {
    printf("You can drink");
  }
  else
  {
    printf("You can't drink");
  }
  */

  // Ternary Operator (test ? exp1 : exp2)
  /*
  int age = 21;
  (age >= 21 ? printf("Yes") : printf("No"));
  */

  // Switch Statement
  /*
  int number = 3;
  switch (number)
  {
  case 1:
    printf("1");
    break;

  case 2:
    printf("2");
    break;

  case 3:
    printf("3");
    break;

  default:
    printf("None");
  }
  */

  // While Loop
  /*
  int count = 1;
  while (count < 5)
  {
    printf("%d\n", count);
    count = count + 1;
  }
  */

  // Do While Loop
  /*
  int count = 1;
  do
  {
    printf("%d\n", count);
    count = count + 1;
  } while (count < 5);
  */

  // For Loop (can use break/continue in loop)
  /*
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", i);
  }
  */

  return 0; // every main function should return 0 at end
}
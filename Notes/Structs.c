#include <stdio.h>

typedef struct Person // Similar to a class, (typedef and person at the end are optional)
{
  double salary;
  int age;
} person;

int main(int argc, char const *argv[])
{
  struct Person person1;
  person1.age = 21;
  person1.salary = 45000;
  printf("Age of person1 is %d\n", person1.age);
  printf("Salary of person1 is %.0f\n", person1.salary);

  struct Person person2 = {.age = 18, .salary = 35000};
  person person3 = {.age = 12, .salary = 0}; // requires typedef and specifier at end of struct to create this way
  printf("Age of person2 is %d\n", person2.age);
  printf("Age of person3 is %d\n", person3.age);
  return 0;
}

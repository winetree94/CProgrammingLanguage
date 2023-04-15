#include <stdbool.h>
#include <stdio.h>

int integerValue = 100;
float floatValue = 100.1234;
double doubleValue = 100.100;
char charValue = 'W';
bool booleanValue = false;

int main(int argc, char *argv[]) {
  printf("integer value: %d \n", integerValue);
  printf("float value: %f \n", floatValue);
  printf("double value: %g \n", doubleValue);
  printf("char value: %c \n", charValue);
  printf("bool value: %i \n", booleanValue);

  printf("harmony: %d %f \n", integerValue, floatValue);

  printf("float cut: %.2f \n", floatValue);

  return 0;
}

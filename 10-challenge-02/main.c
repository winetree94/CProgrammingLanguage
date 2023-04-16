#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("hello world!");

  int integerValue = 0;
  printf("size of integer: %lu \n", sizeof integerValue);

  int charValue = 'D';
  printf("size of char: %lu \n", sizeof charValue);

  long longValue = 0;
  printf("size of long value: %lu \n", sizeof longValue);

  long long longLongValue = 0;
  printf("size of long long value: %lu \n", sizeof longLongValue);

  double doubleValue = 0;
  printf("size of double value: %lu \n", sizeof doubleValue);

  long double longDoubleValue = 0;
  printf("size of long double vlaue: %lu \n", sizeof longDoubleValue);

  return 0;
}

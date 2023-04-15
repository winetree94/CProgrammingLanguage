#include <stdio.h>

int main(int argc, char *argv[]) {
  int a = 3;
  int result = sizeof a;
  printf("size of integer: %d \n", result);

  double b = 23123.32323;
  int result2 = (int)b;
  printf("casted double: %d \n", result2);
  return 0;
}

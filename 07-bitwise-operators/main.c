#include <stdio.h>

// 4 byte / 32bit
int a = 3;

int main(int argc, char *argv[]) {

  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101

  unsigned int c = 0B00000000000000000000000011001100;

  int and = a & b;
  // 12, 0000 1100

  int or = a | b;
  // 61, 0011 1101

  int xor = a ^ b;
  // 0011 0001

  printf("and is %d \n", and);
  printf("or is %d \n", or);
  printf("xor is %d \n", xor);

  printf("c is %d \n", c);
  return 0;
}

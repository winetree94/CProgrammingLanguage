#include <stdarg.h>
#include <stdio.h>

void add() { printf("add"); }
void add2();

void add2() {}

int multiply(int a, int b);
int multiply(int a, int b) { return a * b; }

int spread(int count, ...) { return 0; };

int main(int argc, char *argv[]) {
  printf("hello world!");

  add();
  add2();

  multiply(23, 23);
  return 0;
}

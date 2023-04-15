#include <stdio.h>

/**
 * winetree94
 *
 * ./a.out myArg1
 */
int main(int argc, char *argv[]) {
  printf("command line arguments");

  char *argument1 = argv[0];
  char *argument2 = argv[1];
  char *argument3 = argv[2];

  printf("argc: %d \n", argc);

  printf("argument 1 is program name: %s \n", argument1);
  printf("argument 2 is the command line arguments: %s \n", argument2);
  printf("argument 3 is the command line arguments: %s \n", argument3);
  return 0;
}

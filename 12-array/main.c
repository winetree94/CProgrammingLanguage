#include <stdio.h>

#define SIZE 50.3

int main(int argc, char *argv[]) {
  printf("hello world!");

  int arr[10] = {
      [0] = 3,
      [1] = 4,
      [2] = 5,
      [3] = 6,
  };

  int arr2[5] = {1, 2, 34, 56, 12};

  printf("size of arr2: %lu", sizeof arr2);
  printf("length of arr2: %lu", sizeof arr2 / sizeof arr2[0]);

  printf("size %f", SIZE);

  int arr3[sizeof arr2];

  return 0;
}

#include <stdio.h>

char kr = '3';

int main(int argc, char *argv[]) {
  /**
   * 모든 char[] 끝에는 \0 이 삽입된다.
   * 그래서 길이가 20이면 19개의 문자형만 입력 가능
   */
  char str[] = "null character  \0 asdlkfj asdlfkj";

  char hello[6] = "hello";

  printf("%s", hello);

  return 0;
}

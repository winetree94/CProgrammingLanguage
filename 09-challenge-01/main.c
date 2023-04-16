#include <stdio.h>

int main(int argc, char *argv[]) {
  unsigned long int minutes;

  printf("type minuites \n");
  scanf("%lu", &minutes);

  unsigned long hours = minutes >= 60 ? minutes / 60 : 0;
  printf("hours: %lu \n", hours);
  unsigned long days = hours >= 24 ? hours / 24 : 0;
  printf("days: %lu \n", days);
  unsigned long years = days >= 365 ? days / 365 : 0;
  printf("years: %lu \n", years);

  unsigned long restOfDays = days % 365;
  unsigned long restOfHours = hours % 24;
  unsigned long restOfMinutes = minutes % 60;

  return 0;
}

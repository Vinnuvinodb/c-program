#include <stdio.h>

int isLeapYear(int year) {
  if (year % 400 == 0) {
    return 1;
  }
  else if (year % 100 == 0) {
    return 0;
  }
  else if (year % 4 == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

int main() {
  int anniversary_year, is_leap_year, next_anniversary_year, prev_anniversary_year;

  printf("Enter the year of your anniversary: ");
  scanf("%d", &anniversary_year);

  is_leap_year = isLeapYear(anniversary_year);

  if (is_leap_year) {
    next_anniversary_year = anniversary_year + 4;
    printf("%d is a leap year. Your next anniversary year is %d.\n", anniversary_year, next_anniversary_year);
  }
  else {
    prev_anniversary_year = anniversary_year - 1;
    while (!isLeapYear(prev_anniversary_year)) {
      prev_anniversary_year--;
    }
    printf("%d is not a leap year. Your previous anniversary year was %d.\n", anniversary_year, prev_anniversary_year);
  }

  return 0;
}

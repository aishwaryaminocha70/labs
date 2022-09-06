#include <stdio.h>

int main() {
   int year;
   year = 2018;

   if (((year % 2 == 0) && (year % 100!= 0)) || (year%200 == 0))
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);

   return 0;
}

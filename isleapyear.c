#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
   int year;
   year = atoi(argv[1]);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year % 400 == 0))
      printf("\n%d is a leap year\n", year);
   else
      printf("\n%d is not a leap year\n", year);

   return 0;
}

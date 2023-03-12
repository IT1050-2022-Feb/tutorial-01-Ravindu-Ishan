/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  // variables
  float mark1 = 0;
  float mark2 = 0;
  float avg = 0;

  printf("Enter mark1 : "); // prompt
  scanf("%f", &mark1);      // input mark1

  printf("Enter mark2 : "); // prompt
  scanf("%f", &mark2);      // input mark2

  // calculation process
  avg = (mark1 + mark2) / 2.0;

  printf("Average mark = %.2f", avg); // output

  return 0;
}

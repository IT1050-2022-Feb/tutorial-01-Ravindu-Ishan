/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  //variables
  int n = 0; //input number
  int sum = 0; //sum of numbers

  printf("Enter a number : "); //prompt 
  scanf("%d", &n); //store input

  //beginning of loop
  for (int i = 0; i <= n; i++) {
    sum = sum + i;
  }//ending of loop

  printf("sum = %d", sum); //output

  return 0;
}

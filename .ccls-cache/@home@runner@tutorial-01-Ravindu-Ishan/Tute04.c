/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the
main() function.

Do not change the code given in the main() function when you are implementing
your solution.*/

#include <stdio.h>

int minimum(int a1, int b1);
int maximum(int a2, int b2);
int multiply(int a3, int b3);

int main() {
  int no1, no2;
  printf("Enter a value for no 1 : ");
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2));
  printf("%d ", maximum(no1, no2));
  printf("%d ", multiply(no1, no2));
  return 0;
}

int minimum(int a1, int b1)
{
  if(a1 < b1)
  {
    return a1;
  }
  else
  {
    return b1;
  }
}

int maximum(int a2, int b2)
{
  if(a2 > b2)
  {
    return a2;
  }
  else
  {
    return b2;
  }
}

int multiply(int a3, int b3);
{
  
}
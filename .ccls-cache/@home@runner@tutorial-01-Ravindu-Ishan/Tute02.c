/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int tot_dist = 0; // total_distance
  int ext_dist = 0; // extra_distance = tot_dist - 30
  int amount = 0;   // amount payable

  printf("Enter the distance travelled(km) : ");
  scanf("%d", &tot_dist);

  // beginging of if conditions
  if (tot_dist > 0 && tot_dist <= 30) {
    amount = tot_dist * 50;
    printf(" Amount : %d", amount);

  } else if (tot_dist > 20) {
    amount = (tot_dist - 30) * 40 + (30 * 50);
    printf("Amount : %d", amount);
  } else {
    printf("Please enter a valid distance.");
    printf(" Amount : %d", amount);
  } // end of if conditions

  return 0;
}

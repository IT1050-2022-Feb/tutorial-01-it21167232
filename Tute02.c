/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) 
  
  #include <stdio.h>

int main() {

  float distance, price;

  printf("Input the distance travelled : ");
  scanf("%f", &distance);
  printf("\n");

  printf("The distance travelled is : %.f\n", distance);

  if (distance <= 30){
    price = distance*50;
  }  
  else{
    price = (30*50) + (distance - 30)*40;
  }

 printf("The amount to be paid is Rs. %.2f\n", price);

  return 0 ;
  }
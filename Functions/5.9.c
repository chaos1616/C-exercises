// program should use a function called calculatecharges to determine the charges to each customer
//
#include <stdio.h>

//function prototype for calculate charges
float calculateCharges(int);

int main(void){
  int hours1;
  int hours2;
  int hours3;
  	
  printf("hours for rent of car 1: ");
  scanf("%d", &hours1);
  printf("hours for rent of car 2: ");
  scanf("%d", &hours2);
  printf("hours for rent of car 3: ");
  scanf("%d", &hours3);
  
  printf("\n\nRESULTS: \n");
  printf("%-8s%-8s%-8s\n", "Car", "Hours", "Charge");
  printf("1         %-3d%8.2f\n", hours1, calculateCharges(hours1));
  printf("2         %-3d%8.2f\n", hours2, calculateCharges(hours2));
  printf("3         %-3d%8.2f\n", hours3, calculateCharges(hours3));
  printf("TOTAL     %-3d%8.2f\n", hours1 + hours2 + hours3, calculateCharges(hours1) + calculateCharges(hours2) + calculateCharges(hours3));

  return 0;
}

float calculateCharges(int n){
  float maincharge = 0.0;
  float servicecharge = (float)n * 0.50;

  if(n < 24){
    maincharge = 50.00;
  }
  else if(n > 24){
    int i = n / 24;
    maincharge = (float)50.0 * i + (5.0 * (n - (24 * i)));
  }
  
  return maincharge + servicecharge;
}
//COMPLETED

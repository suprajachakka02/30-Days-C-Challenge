#include <stdio.h>
int main(){
float distance,mileage,fuel,fuelprice,totalfuelprice;
printf("Enter fuel price:\n");
scanf("%f",&fuelprice);
printf("Enter distance covered:\n");
scanf("%f",&distance);
printf("Enter mileage:\n");
scanf("%f",&mileage);
fuel = distance/mileage;
totalfuelprice = fuel*fuelprice;
printf("Fuel required is:%f\n",fuel);
printf("Total price for fuel is:%f\n",totalfuelprice);
return 0;
}

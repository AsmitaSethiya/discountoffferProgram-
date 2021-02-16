#include <stdio.h>


int main() {

	
	float retailPrice;
  
	printf("Enter retail price: ");
	scanf("%f", &retailPrice);

	float payableAmount;

	if (retailPrice >= 500)
  {
		printf("Eligible for discount");
		payableAmount = retailPrice * 0.9;
	} 
  else 
  {
		printf("Not eligible for discount");
		payableAmount = retailPrice;
	}

	printf("Discount availed: Rs %.1f\n", retailPrice - payableAmount);
	printf("Net payable amount: Rs %.1f\n", payableAmount);

	return 0;
}

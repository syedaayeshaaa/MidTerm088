#include <iostream>
using namespace std; 

int main()
{
	int loyaltyPoints = 0;
	double conversionRate = 10.0;
	double purchaseAmount, discount; 
	char choice;

	do {
		cout << "Enter the total amount of your purchase please: " << endl;
		cin >> purchaseAmount; 
		loyaltyPoints += purchaseAmount / conversionRate; 
        cout << "The loyalty points you earned are: " << loyaltyPoints << endl; 

		cout << "Do you want to redeem your points? " << endl; 
		cin >> choice; 

		if (choice == 'y' || choice == 'Y') {
			int redeemPoints;
			cout << "Enter total number of points to get redeemed: " << endl;
			cin >> redeemPoints;
			
			discount = redeemPoints / loyaltyPoints * 5;
			cout << "Your discount is: " << discount << endl; 
		}

		cout << "Do you want to make more purchase? ";
		cin >> choice; 

	}

	while (choice == 'y' || choice == 'Y');
		cout << "Thank you for shopping!" << endl << "Your loyalty points are: " << loyaltyPoints << endl; 
	

}
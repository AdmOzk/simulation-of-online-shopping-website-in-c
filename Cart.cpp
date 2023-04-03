#include "Cart.h"
#include "Book.h"
#include "Movie.h"
#include "Music.h"
#include "Product.h"
#include <iostream>
using namespace std;

//const , const with parameters , dest.

Cart::Cart()
{
	TotalPrice = 0;
	index = 0;
	
}

Cart::Cart(float a, int b)
{
	TotalPrice = a;
	index = b;
	
}



Cart::~Cart()
{

}



void Cart::incrementProduct(Product *a)
{
	Pl[index] = a; //adds product to our list.
	index++;
}

void Cart::deleteProduct(int number)
{
	incrementStock(number);
	for (int i = number; i < index - 1; i++)
	{
		Pl[i] = Pl[i + 1]; //removes a product from list.
	}
	index--;
}

bool Cart::isNull() //checks if cart empty
{
	if (index == 0)
		return true;
	else
		return false;
}

bool Cart::isConfirmed() //asks user if shopping ended.
{
	int confirm;
	cout << "Do you confirm your order?" << endl;
	cout << "1.Yes" << endl;
	cout << "2.No" << endl;
	cout << "Enter your selection:";
	cin >> confirm;
	if (confirm == 1)
	{
		cout << "Thank you For your order !"<<endl;
		return true;
	}
	else if (confirm == 2)
	{
		return false;
	}
	


	return false;
}

template<typename T> //template function that helps to change
//totalprice after operations.
T DiscountCalculator(T price, T TotalPrice)
{
	TotalPrice = TotalPrice + price;
	return TotalPrice;
}


void Cart::display()
{
	if (isNull()) {
		cout << "Error ! Your cart have no products." << endl;
	}
	else
	{
	    cout<< endl;
		cout << "Your Cart" << endl;
		TotalPrice = 0;
		for (int i = 0; i < index; i++)
		{
			Pl[i]->display();
			TotalPrice = DiscountCalculator(Pl[i]->calculateDiscount
			(Pl[i]->getPrice()), TotalPrice); 
		}
		cout << "Total price is:" << TotalPrice << endl;
	} //discounts happens inside of this display.
}


void Cart::setIndextoZero()
{
	index = 0;
} //sets first element to 0 to help empty cart

int Cart::incrementStock(int number)
{
	int a;
	if (Pl[number]->getCategory() == "Book") {
		a = Pl[number]->getStock();
		a += 1;
		Pl[number]->updateStock(a);
		return 0;
	}
	else if (Pl[number]->getCategory() == "Music")
	{
		a = Pl[number]->getStock();
		a += 1;
		Pl[number]->updateStock(a);
		return 0;
	}
	else if (Pl[number]->getCategory() == "Movie")
	{
		a = Pl[number]->getStock();
		a += 1;
		Pl[number]->updateStock(a);
		return 0;
	}
	else
		return 0;
} //incerements stock after delete operation happens.










bool operator==(Product& a, string& b)
{
	if (a.getCategory() == b)
		return true;
	else
		return false;
}
//In Increment stock we can check if object is book , music or movie
//In my scenario I didnt need to use operator overloading 
// I added this operator overloading as an example
//Due to Instructors request.
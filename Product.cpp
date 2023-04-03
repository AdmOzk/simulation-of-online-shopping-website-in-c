#include "Product.h"
#include <iostream>
#include "Music.h"
#include "Movie.h"
using namespace std;

Product::Product()
{
	product_name = "";
	language = "";
	genre = "";
	category = "";
	stock = 0;
	price = 0;
	product_code= 0;
} //default const.

Product::~Product()
{
	//destructor.
}

Product::Product(string tpn,string tl,string tg,string tc,int ts,int tp,int tpc) //Constructor with parameters , t letter indicates template.
{
	product_name = tpn;
	language = tl;
	genre = tg;
	category = tc;
	stock = ts;
	price = tp;
	product_code = tpc;
}//const. witth oar

//int calculateDiscount()
//{
//	return 1; //no discount for base class.
//}

void Product::display()
{
	cout<<"Product name:"<<product_name<<endl;
	cout << "Language:" << language << endl;
	cout << "Product genre:" << genre<< endl;
	cout << "Category:" <<category<< endl;
	cout << "Product stock:" <<stock<< endl;
	cout << "Price:" <<price<< endl;
	cout << "Product Code:" << product_code << endl;
	cout << endl << endl;
	
}//displays each products product information.

bool Product::checkStock() 
{
	if (stock == 0 || stock < 0)
	{
		cout << "ERROR! NO PRODUCT!" << endl;
		return false;
	}
	return true; 
} //checks if a product have stock

//get functions that returns stock and price

int Product::getStock()
{
	return stock;
}

int Product::getPrice()
{

	return price;
} 

//update functions for price and stock

void Product::updatePrice(int a)
{
	price = a;
}

void Product::updateStock(int b)
{
	price = b;
}

string Product::getCategory()
{
	return category;
} //gets category to check products genre if its movie , book or music





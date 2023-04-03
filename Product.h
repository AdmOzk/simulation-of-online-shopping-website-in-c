
#pragma once
#include <iostream>

using namespace std;
class Product
{
protected:
	string product_name, language, genre, category;
	int stock,price,product_code; //members
public :
	Product();
	Product(string, string, string, string, int, int, int);
	~Product(); //constructors and destructor
	void display();
	/*int calculateDiscount(); *///has to check if there is price.
	bool checkStock(); // checks if stock greater than 0 for any product
	int getStock(); //gets stock
	int getPrice();//gets price to calculate price
	void updatePrice(int); //admin can update price by this method
	void updateStock(int); //amdin can update stock by this method
	string getCategory(); //this is a method which I am going to use in Cart.cpp
	//by this discount calculator method will understand products category if its book , music
	// or movie because discount rates different for each.
	virtual float calculateDiscount(float)=0; // virtual funciton that will calculate discounts
	//for every product.


};


#pragma once
#include "Product.h"
class Book : public Product
{
private :
	double ISBN;
	string publisher; // member functions 
public:
	Book();
	Book(string, string, string, string, int, int, int,double,string);
	~Book();
	void display();
	bool checkStock(); //checks stock
	float calculateDiscount(float); //Discount function
  
};


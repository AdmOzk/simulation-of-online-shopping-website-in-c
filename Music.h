#pragma once
#include <iostream>
#include "Product.h"
using namespace std;
class Music : public Product
{
private :
	string artist;
	string format;
	float runtime;
public:
	Music();
	Music(string, string, string, string, int, int, int,string,string,float);
	~Music();
	void display();
	bool checkStock(); //check stock and discount
	float calculateDiscount(float);
};


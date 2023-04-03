#pragma once
#include "Product.h"
class Movie : public Product
{
private:
	string directors[1]; //limited to 2 person , first person is array element 0. Last person is array element 1.
	string starring[2]; //limited to 3 person , first person is array element 0.  Last person is array element 2.
	string subtitles;   
	string audio_language;
public:
	Movie();
	Movie(string, string, string, string, int, int, int, string, string,string,string, string, string,string);
	~Movie();
	void display();
	bool checkStock(); //stock and discount functions.
	float calculateDiscount(float);

	
};


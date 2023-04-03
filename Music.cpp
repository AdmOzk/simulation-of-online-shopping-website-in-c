#include "Music.h"
#include <iostream>
using namespace std;
//const , const with parameter , dest.
Music::Music()
{
	product_name = "";
	language = "";
	genre = "";
	category = "";
	stock = 0;
	price = 0;
	product_code = 0;
	artist="";
	format = "";
	runtime = 0;

};


Music::Music(string tpn, string tl, string tg, string tc, int ts, int tp, int tpc, string ta, string tf, float trt)
	:Product(tpn, tl, tg, tc, ts, tp, tpc)
{
	artist = ta;
	format = tf;
	runtime = trt;
}

Music::~Music()
{

}

void Music::display()
{
	cout << "Product name:" << product_name << endl;
	cout << "Language:" << language << endl;
	cout << "Product genre:" << genre << endl;
	cout << "Category:" << category << endl;
	cout << "Product stock:" << stock << endl;
	cout << "Price:" << price << endl;
	cout << "Product Code:" << product_code << endl;
	cout << "Artist:" << artist<< endl;
	cout << "Format:" << format << endl;
	cout << "Runtime:" << runtime << endl;
	cout << endl << endl;
}

//check stock and calculate discount

bool Music::checkStock() 
{
	if (stock == 0 || stock < 0) {
		cout << "ERROR ! NO STOCK" << endl;
		return false;
	}
	else
		return true;
}

float Music::calculateDiscount(float)
{
	price = price - (price * 15 / 100);
	return price;
}





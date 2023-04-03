#include "Book.h"



Book::Book()
{
	product_name = "";
	language = "";
	genre = "";
	category = "";
	stock = 0;
	price = 0;
	product_code = 0;
	ISBN=0;
	publisher="";

};


Book::Book(string tpn, string tl, string tg, string tc, int ts, int tp, int tpc, double ti, string tps)
	:Product(tpn, tl, tg, tc, ts, tp, tpc)
{
	ISBN = ti;
	publisher = tps;
}

Book::~Book()
{

}

//check stock and calculate discount

bool Book::checkStock()
{
	if (stock == 0 || stock < 0) {
		cout << "ERROR ! NO STOCK" << endl;
		return false;
	}
	else return true;
}

float Book::calculateDiscount(float price)
{
	price = price - (price * 12 / 100);
	return price;
}


void Book::display()
{
	cout << "Product name:" << product_name << endl;
	cout << "Language:" << language << endl;
	cout << "Product name:" << genre << endl;
	cout << "Category:" << category << endl;
	cout << "Product stock:" << stock << endl;
	cout << "Price:" << price << endl;
	cout << "Product Code:" << product_code << endl;
	cout << "ISBN:" << ISBN << endl;
	cout << "Publisher:" << publisher << endl;
	cout << endl << endl;
}





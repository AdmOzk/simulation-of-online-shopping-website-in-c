#include "Movie.h"
#include <iostream>
using namespace std;

Movie::Movie()
{
	product_name = "";
	language = "";
	genre = "";
	category = "";
	stock = 0;
	price = 0;
	product_code = 0;
	for (int i = 0; i < 2; i++)
	{
		directors[i] = "";

	}
	for (int j = 0; j < 3; j++)
	{
		starring[j] = "";
	}
	subtitles = "";
	audio_language = "";
	//loops for fulffil arrays.
	

};

Movie::Movie(string tpn, string tl, string tg, string tc, int ts, int tp, int tpc,string tpd1,string tpd2, string tps1,string tps2,string tps3, string tsp, string tpal)
	:Product(tpn, tl, tg, tc, ts, tp, tpc)
{
	directors[0] = tpd1; //arrray
	directors[1] = tpd2;
	starring[0]=tps1;
	starring[1]=tps2;
	starring[2]=tps3;
    subtitles=tsp;
	audio_language=tpal;
}

Movie::~Movie()
{
}

//check stock and calculate discount

bool Movie::checkStock()
{
	if (stock == 0 || stock < 0) {
		cout << "ERROR ! NO STOCK" << endl;
		return false;
	}
	else return true;
}

float Movie::calculateDiscount(float)
{
	price = price - (price * 5 / 100);
	return price;
}



void Movie::display()
{
	cout << "Product name:" << product_name << endl;
	cout << "Language:" << language << endl;
	cout << "Product genre:" << genre << endl;
	cout << "Category:" << category << endl;
	cout << "Product stock:" << stock << endl;
	cout << "Price:" << price << endl;
	cout << "Product Code:" << product_code << endl;
	for (int i = 0; i < 2; i++)
	{
		int j = 0;
		{
			if (j == 0) 
			{
				cout << "Director :" << directors[i] << endl;
			}
			else
				cout << "Director " << j + 1 << ":" << directors[i] << endl; //In this loop director n names printed 
			//if there is more than one director , director will be with number. Ex : Director 1 : Adem , Director 2: X...
			j++;
		}
	}
	for (int a = 0; a < 3; a++)
	{
		int b = 0;
		if (b == 0)
		{
			cout << "Starring : " << starring[a] << endl;
		}
		else
			cout << "Starring  " << b + 1 << ":" << directors[a] << endl; //In this loop director n names printed 
		//if there is more than one starring starring will be printed with number. Ex : Starring 1 : Adem , Starring 2: X...
		b++;
	}
	cout << "Subtitles :" << subtitles << endl;
	cout << "Audio Language :" << audio_language << endl;
	cout << endl << endl;
}



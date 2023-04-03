#include <iostream>
#include "Product.h"	
#include "Book.h"
#include "Movie.h"
#include "Music.h"

using namespace std;
#pragma once
class Cart
{
private :
	float TotalPrice;
	Product *Pl[5]; //Product list that is in our cart.
	int index;
public:
	Cart();

	Cart(float, int);
	~Cart();
	

	void incrementProduct(Product*); // to add a product to cart..

	void deleteProduct(int); // to remove a product.

	bool isNull(); //it checks if its empty. (CART) 

	bool isConfirmed(); //asks user if he or she confirms its cart / shopping.

	friend bool operator==(Product& a, string& b); //example for operator overloading 
	//compares product object with string to understand if a product is book , music or movie  

	void display(); 

	void setIndextoZero(); //after confirming users cart cart will empty the cart. 
	//After a order our cart will be empty because we ordered.


	int incrementStock(int); //if we will remove a product from our cart
	//stock must be same as it was 
	//if there is 10 music we will ad one of them to our cart , now there is 9 music
	//then we can put it back and there will be 10 music again.

	

};






#include <iostream>
#include "Product.h"
#include "Music.h"
#include "Cart.h"
#include "Movie.h"
#include "Book.h"

// In program flow exit not always for terminating , 
//some timesit means to go back.


using namespace std;

int main()
{

	Book buk[5] = { Book("The WINNER,JORGE JESUS","Portugese","Biography","Book",5,300,124562,87921,"Jorge Jesus"),
	Book("Zirveye dogru","Turkish","Auto-Biography","Book",6,200,124563,73234,"Ismail Kartal"),
	Book("To Paradise","English","Adventure","Book",7,600,124564,89723,"Hanya Yanagire"),
	Book("Yeniden Dogus","Turkish","Auto-Biography","Book",8,200,124564,678234,"Emre Belozoglu"),
	Book("The Midnight Library","German","Sci-fii","Book",9,300,124565,489321,"Matt Haig") };

	Movie mov[5] = { Movie("Revenge of the sith","English","Sci-fii","Movie",7,300,34567,
	"George Lucas","","Hayden Chirstensen","Natalie Portman","Ewan McGregor","English","English"),
	 Movie("Clone Wars","English","Sci-fii","Movie",8,100,34568,
	"George Lucas","","Hayden Chirstensen","Natalie Portman","Ewan McGregor","English","English"),
	 Movie("Alex Camera 10","Brazilian","Biography","Movie",5,245,34569,
	"Caue Serur Pereira","","Alex de souza","Zico","Ronaldo","English","Brazilian"),
	 Movie("4-0lik Aker zaferi","Portugese","Nature documentary","Movie",9,61,3456710,
	"Van Persie","Vitor Pereria","Luis nani","Bruno Alves","Volkan Demirel","Turkish","Portugese"),
	 Movie("6-0lik tarihi zafer","German","Nature documentary","Movie",6,60,3456711,
	"Daum","","Serhat akin","Rustu recber","Umit Ozat","Turkish","German") };

	Music mus[5] = { Music("Bloody Mary ","English","Pop","Music",9,250,87654,"Lady Gaga","Electro-pop",4.5),
	Music("Dreams pt2","English","Pop","Music",7,320,87653,"Lost-Sky","NCS",4),
	Music("Kerosene","English","Phonk","Music",8,350,87652,"Castles","Fast-Phonk",3.2),
	Music("Crash","German","Pop","Music",6,125,87651,"Neovaii","Electro-pop",2.5),
	Music("Party Party","English","RB","Music",5,350,87650,"Yally","RandB",3) };

	Cart myCart;

	string s;
	int s2;
	int s3;
	int s4;
	int s5;
	int s6;
	int s7;

	int c1; //customer decisions
	int c2;
	int c3;
	int c4;

	int b1; //book decisions
	int b2;
	int b3;

	Music* musc[5];  //Defining new arrays 
	Book* buuk[5];
	Movie* movi[5];

	musc[0] = &mus[0]; //Assigning adresses of arrays to arrays 
	musc[1] = &mus[1]; //By that operation virtual functions will be available.
	musc[2] = &mus[2];
	musc[3] = &mus[3];
	musc[4] = &mus[4];

	buuk[0] = &buk[0];
	buuk[1] = &buk[1];
	buuk[2] = &buk[2];
	buuk[3] = &buk[3];
	buuk[4] = &buk[4];

	movi[0] = &mov[0];
	movi[1] = &mov[1];
	movi[2] = &mov[2];
	movi[3] = &mov[3];
	movi[4] = &mov[4];

	

	
	
	//main starts , usage of do while loops is to make progam continually
	do
	{
		cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
		cout << "Welcome to our store!" << endl; //login part  customer , admin or terminate
		cout << "Enter the charecter for the admin log in or enter x to continue , enter e to exit:";
		cin >> s;
		if (s == "*") { //* used for admin.
			do
			{
				cout << "1. Update product information." << endl;
				cout << "2. Exit" << endl;
				cout << "Enter your selection :";
				cin >> s2;
			//admin can update product properties.
				if (s2 == 1)
				{
					do
					{
						cout << "1.Book" << endl;
						cout << "2.Movie" << endl;
						cout << "3.Music" << endl;
						cout << "4.Exit" << endl;
						cout << "Enter your selection:";
						cin >> s3;
						//decision to update a specific product.
						if (s3 == 1)
						{
							for (int i = 0; i < 5; i++)
							{
								cout << "BOOK-" << i + 1 << endl;
								buk[i].display();
							}
							do
							{
								cout << "1. Update stock" << endl;
								cout << "2.Update Price" << endl;
								cout << "3. Exit" << endl;
								cout << "Enter your selection:";
								cin >> s4;
								//after displaying every book
								//adming willl choose operation to do
								if (s4 == 1)
								{
									for (int i = 0; i < 5; i++)
									{
										cout << "BOOK-" << i + 1 << endl;
										buk[i].display();
									}
									int b1, n1;
								  
									cout << "Enter the Book's number to update:";
									cin >> b1;
									cout << "Enter new stock:";
									cin >> n1;
									buk[b1 - 1].updateStock(n1);
									//admin will choose book to update stock
									//arrays starts from 0 , but in normal we count from 1 
									// if book 1 is entered it means we should change arrays 0th element
								}
								else if (s4 == 2)
								{
									for (int i = 0; i < 5; i++)
									{
										cout << "BOOK-" << i + 1 << endl;
										buk[i].display();
									}
									int b2, n2;
									cout << "Enter the Book's number to update:";
									cin >> b2;
									cout << "Enter new Price:";
									cin >> n2;
									buk[b2 - 1].updatePrice(n2);
									//admin will choose book to update price
									//and admin will decide new price
								}
								else {
									cout << endl;
								}
							} while (s4 != 3); //basically if user enters that number
							// program will go back , to previous menu.
						}
						else if (s3 == 2)
						{
							do
							{
								cout << "1. Update stock" << endl;
								cout << "2.Update Price" << endl;
								cout << "3. Exit" << endl;
								cout << "Enter your selection:";
								cin >> s5;
								//same logic for movie section
								if (s5 == 1)
								{
									for (int i = 0; i < 5; i++)
									{
										cout << "Movie-" << i + 1 << endl;
										mov[i].display();
									}
									int m1, n3;
									cout << "Enter the Movie's number to update:";
									cin >> m1;
									cout << "Enter new stock:";
									cin >> n3;
									mov[m1 - 1].updateStock(n3);
									//admin decides which movie's stock going to change
									//and new stock
								}
								else if (s5 == 2)
								{
									for (int i = 0; i < 5; i++)
									{
										cout << "Movie-" << i + 1 << endl;
										mov[i].display();
									}
									int m2, n4;
									cout << "Enter the Movie's number to update:";
									cin >> m2;
									cout << "Enter new Price:";
									cin >> n4;
									mov[m2 - 1].updatePrice(n4);
									//admin decides which movie's price going to change
									//and new price
								}
								else {
									cout << endl;
								}
							} while (s5 != 3);
						}
						else if (s3 == 3)
						{
							do
							{
								cout << "1. Update stock" << endl;
								cout << "2.Update Price" << endl;
								cout << "3. Exit" << endl;
								cout << "Enter your selection:";
								cin >> s6;
								//same for music
								if (s6 == 1)
								{
									for (int i = 0; i < 5; i++)
									{
										cout << "Music-" << i + 1 << endl;
										mus[i].display();
									}
									int mu1, n5;
									cout << "Enter the Music's number to update:";
									cin >> mu1;
									cout << "Enter new stock:";
									cin >> n5;
									mus[mu1 - 1].updateStock(n5); 
									//admin decides which movie's stock going to change
									//and new stock
								}
								else if (s6 == 2)
								{
									for (int i = 0; i < 5; i++)
									{
										cout << "Movie-" << i + 1 << endl;
										mus[i].display();
									}
									int mu2, n6;
									cout << "Enter the Music's number to update:";
									cin >> mu2;
									cout << "Enter new stock:";
									cin >> n6;
									mus[mu2 - 1].updatePrice(n6); 
									//admin decides which movie's price going to change
									//and new price

								}
								else {
									cout << endl;
								}
							} while (s6 != 3); //program will ask same questions 
							//until input is valid.
						}
						else {
						cout << endl;
						}
					} while (s3 != 4);
				}
			} while (s2 != 2);
		}



		else if (s == "x") //Menu for customer.
		{
			do
			{
				cout << "1. View Cart" << endl;
				cout << "2. Select Category" << endl;
				cout << "3. Exit" << endl;
				cout << "Enter your choice:";
				cin >> c1;
				//First selection.
				if (c1 == 1)
				{
					cout << "----------------------" << endl;
					cout << "Your cart" << endl;
					cout << "----------------------" << endl;
					myCart.display();
              //Displays customers cart , if cart empty error message will be.
					if (myCart.isNull() == true)
					{
						cout << "..." << endl;
					}
					else if (myCart.isNull() == false)
					{
						int r1, r2;
						cout << "Do you wish to remove product?" << endl;
						cout << "1.Yes" << endl;
						cout << "2.No" << endl;
						cout << "Enter your selection :";
						cin >> r1;
						if (r1 == 1)
						{
							myCart.display();

							cout << "Enter the products number you want to remove" << endl;
							cin >> r2;
							myCart.deleteProduct(r2-1);  // this function used to remove a product
							myCart.incrementStock(r2-1); //increments stock of deleted product.
							//like putting back something from our cart.
						}
						if (r1 == 2)
						{

							/*myCart.isConfirmed();*/
							if (myCart.isConfirmed() == true)
							{
								for (int i = 0; i < 5; i++) {
									myCart.setIndextoZero();
								} //ask user twice if he or she wants to confirm the order.
							}

						}

					
						
					}
				}
				else if (c1 == 2)
				{
					do
					{
						cout << "1. Book" << endl;
						cout << "2. Movie" << endl;
						cout << "3. Music" << endl;
						cout << "4. Exit" << endl;
						cout << "Enter your choice:";
						cin >> c2;
						//For selet product customer will decide product 
						// to add cart
						if (c2 == 1)
						{
							cout << "BOOKS" << endl;
							for (int i = 0; i < 5; i++)
							{
								cout << "BOOK-" << i + 1 << endl;
								buk[i].display();
								cout << endl;

							}
							do
							{
								cout << "1. Select Product" << endl;
								cout << "2. Exit" << endl;
								cout << "Enter your choice :";
								cin >> b1;
								//after displaying every book customer will select 
								if (b1 == 1)
								{
									int select_book;
									cout << "Enter the number of book to add cart:";
									cin >> select_book;
									if (buuk[select_book - 1]->checkStock() == true)
										myCart.incrementProduct(buuk[select_book - 1]);
									else
										cout << "Going back..." << endl;
									//in this phase will make addition
									// bu by check stock function if stock<=0 , then error message will be printed.
									//but if stock is exist stock will be decremented by 1 and prodcut will be 
									//added to the cart.
								}
								else {
									cout << endl;
								}
							} while (b1 != 2); //program runs until exit entered.
						}
						else if (c2 == 2)
						{
							cout << "MOVIES" << endl;
							for (int i = 0; i < 5; i++)
							{
								cout << "Movie-" << i + 1 << endl;
								mov[i].display();
								cout << endl;

							}
							do
							{ 
								cout << "1. Select Product" << endl;
								cout << "2. Exit" << endl;
								cout << "Enter your choice :";
								cin >> b2;
								if (b2 == 1)
								{
									int select_Movie;
									cout << "Enter the number of Movie to add cart:";
									cin >> select_Movie;
									if(movi[select_Movie - 1]->checkStock() == true)
									myCart.incrementProduct(movi[select_Movie - 1]);
									else
										cout << "Going back..." << endl;
									//in this phase will make addition
										// bu by check stock function if stock<=0 , then error message will be printed.
										//but if stock is exist stock will be decremented by 1 and prodcut will be 
										//added to the cart.
								}
							} while (b2 != 2);
						}
						else if (c2 == 3)
						{
							cout << "MUSICS" << endl;
							for (int i = 0; i < 5; i++)
							{
								cout << "MUSIC-" << i + 1 << endl;
								mus[i].display();
								cout << endl;
							}
							do
							{
								cout << "1. Select Product" << endl;
								cout << "2. Exit" << endl;
								cout << "Enter your choice :";
								cin >> b3;
								if (b3 == 1)
								{
									int select_Music;
									cout << "Enter the number of Music to add cart:";
									cin >> select_Music;
									if(musc[select_Music - 1]->checkStock()==true)
									myCart.incrementProduct(musc[select_Music - 1]);
									else 
									cout << "Going back..." << endl;
									//in this phase will make addition
									// bu by check stock function if stock<=0 , then error message will be printed.
									//but if stock is exist stock will be decremented by 1 and prodcut will be 
									//added to the cart.
								
								}
							} while (b3 != 2);
						}
						else {
							cout << endl;
						}
					} while (c2 != 4);
				}
			}while (c1 != 3);
		}
		else
		{
		cout << endl;
		}
	} while (s != "e"); //if e entered program will be terminated.
}



#include <iostream>
#include <string>
using namespace std;
#include "user.h"
#include "book.h"
int Book::count = 0;
double Book::sum = 0;
int User::count = 0;
int Book::c = 0;
int main(){

	cout << "let,s add a user" << endl;
	cout << "Enter the User Information in this order" << endl;
	User u1;
	cin >> u1;
	u1.setId(1);
	cout << u1 << endl;
	cout << "===================================" << endl;

	cout << "let,s add a nother user" << endl;
	cout << "Enter the User Information in this order" << endl;
	User u2;
	cin >> u2;
	u2.setId(2);
	cout << u2 << endl;
	cout << "====================================" << endl;

	cout << "let,s add a book\nEnter the book info in this order\n";
	Book b1;
	cin >> b1;
	b1.setId(1);
	cout << b1 << endl;
	cout << "========================================" << endl;

	cout << "let,s add a nother book\nEnter the book info in this order\n" << endl;
	Book b2;
	cin >> b2;
	b2.setId(2);
	cout << b2 << endl;
	cout << "========================================" << endl;

	cout << "letes assign an author for the first book\nset the first user u1 as the auther" << endl;
	b1.setAuthor(u1);
	cout << "lets rate the first book with rate 3 and 4 and print the book info" << endl;
	b1.rateBook(3);
	b1.rateBook(4);
	if (b1.checkAuther()){
		cout << b1 << endl;
		cout << "========================================" << endl;
	}
	else{
		cout << "Enter The Book Auther First" << endl;
	}
	cout << u1 << endl;
	cout << "========================================" << endl;
	cout << "========================================" << endl;
	cout << "lets add new rate 5 for book one and print it\n";
	b1.rateBook(5);
	if (b1.checkAuther()){
		cout << b1 << endl;
		cout << "===================================\n";
	}
	else{
		cout << "Enter The Book Auther First" << endl;
	}
	cout << u1 << endl;
	cout << "======================================\n=======================================" << endl;
}

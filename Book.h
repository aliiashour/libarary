#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <string>
#include "user.h" ;
class Book
{
private:
	string title;
	string isbn;
	string category;
	int b_id;
	double averageRating;
	User author;
public:
	static int count;
	static int c;
	static double sum; //new
	Book();
	Book(string title, string isbn, string category);
	Book(const Book& book);
	void setTitle(string title);
	string getTitle();
	void setISBN(string isbn);
	string getISBN();
	void setId(int b_id);
	int getId();
	void setCategory(string category);
	string getCategory();
	void setAuthor(User user);
	User getAuthor();
	void rateBook(int rating);
	double getRate(); //add
	bool checkAuther();//new featuers i make to make sure that hte book has an author before print it informayion
	bool operator==(const Book& book);
	friend ostream &operator<<(ostream &output, const Book &book);
	friend istream &operator>>(istream &input, Book &book);
};

#endif // BOOK_H_INCLUDED

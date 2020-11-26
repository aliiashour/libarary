#include <iostream>
#include <string>
using namespace std;
#include "book.h";
Book::Book(){
	title = "";
	isbn = "";
	category = "";
	averageRating = 0.0;
	b_id = 0;
}
Book::Book(string title, string isbn, string category){
	this->title = title;
	this->isbn = isbn;
	this->category = category;
	b_id =++count;
}
Book::Book(const Book& b){
	title = b.title;
	isbn = b.isbn;
	category = b.category;
	b_id = ++count;
}
void Book::setTitle(string title){
	this->title = title;
}
string Book::getTitle(){
	return title;
}
void Book::setISBN(string isbn){
	this->isbn = isbn;
}
string Book::getISBN(){
	return isbn;
}
void Book::setId(int b_id){
	count++;
	for (int i = 0; i > -1; i++){
		if (b_id == count){
			this->b_id = b_id;
			break;
		}
		else{
			cout << "sorry, you CAN NOT reset this id, it already taken CHOOSE another one" << endl;
			cout << "Recommended " << count << endl;
			int idd = 0;
			cin >> idd;
			b_id = idd;
			continue;
		}
	}
}
int Book::getId(){
	return b_id;
}
void Book::setCategory(string category){
	this->category= category;
}
string Book::getCategory(){
	return category;
}
void Book::setAuthor(User au){
	string name = au.getName();
	string email = au.getEmail();
	double age = au.getAge();
	author.setName(name);
	author.setEmail(email);
	author.setAge(age);
}
User Book::getAuthor(){
	return author;
}
bool Book::operator==(const Book&b){
	return (title == b.title && isbn == b.isbn && category == b.category && b_id == b.b_id && author == b.author);
}
void Book::rateBook(int rating){
	++c;
	sum += rating ;
	averageRating = (sum) / c;
}
double Book::getRate(){
	return averageRating;
}
bool Book::checkAuther(){
	return (author.getName() != "");
}
istream &operator>>(istream &input, Book &b){
	cout << "Enter Book info as Title Isbn Category" << endl;
	input >> b.title >> b.isbn >> b.category ;
	return input;
}
ostream &operator<<(ostream &output, const Book &b){
	if ( b.author.getName() == "" ){
		output << "Please Enter Book Auther Before Print it Information"<< endl;
		return output;
	}
	cout << "================== Book "<< b.b_id <<" info ==================\n";
	output << "Book title\t=>\t" << b.title << "\nBook isbn\t=>\t" << b.isbn << "\nBook id \t=>\t"<< b.b_id << "\nBook category\t=>\t" << b.category << "\nBook rate\t=>\t" << b.averageRating<<endl;
	return output;
}

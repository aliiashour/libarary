#include"User.h"
//GLOPAL OVERLOADING ISTREAM | Overload the >> operator of istream built in class to my specific usage.
istream &operator>>( istream &input, User &u ){
	cout << "Enter User Data as\nName\tAge\tEmail\tPassword" << endl;
	input >> u.name >> u.age >> u.email >> u.password;
	u.id = u.count ;
	return input;
};
//GLOPAL OVERLOADING OSTREAM | Overloads the << operator of ostream built in class to my specific usage.
ostream &operator<<(ostream &output, const User &u ){
	cout << "================== User "<< u.id <<" info ==================\n";
	output << "User name\t=>\t" << u.name << "\nUser age\t=>\t" << u.age ;
	cout << "\nUser id \t=>\t" << u.id << "\nUser email\t=>\t" << u.email;
	return output;
}
//DEFULT CONSTRUCTOR | Automatically called when object is created without parameters.
User::User(){
name = " ";
age = 0.0 ;
password = "" ;
email = "" ;
id = ++count;
};
//PARAMETERIZED CONSTRUCTOR
User::User(string name, int age, string email, string password){
this->name = name;
this->age = age;
this->email = email;
this->password = password;
id = ++count;
};
//COPY CONSTRUCTOR | Copies a user data to another user.
User::User(const User &user){
name = user.name;
age = user.age;
id = user.id;
password = user.password;
email = user.email;
};
//OPERATOR == OVERLOAD | Used to assign a user to a user as if they are normal variables of the same type.
bool User::operator==(const User &user){
if(name==user.name && age==user.age && email==user.email && id==user.id){
    return true;
}
return false;
};
//SETTER NAME
void User::setName(string name){
this->name = name;
  };
//GETTER NAME
string User::getName() const{
return name;
  };
//SETTER PASSWORD
void User::setPassword(string password){
this->password = password;
};
//GETTER PASSWORD
string User::getPassword(){
return password;
};
//SETTER EMAIL
void User::setEmail(string email){
this->email = email;
};
//GETTER EMAIL
string User::getEmail(){
return email;
};
//SETTER AGE
void User::setAge(int age){
this->age = age;
};
//GETTER AGE
int User::getAge(){
return age;
};

//SETTER ID
void User :: setId(int id){
  this->id = id;
  };
//GETTER IDD
int User::getId(){
return id;
  };

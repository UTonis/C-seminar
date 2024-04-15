#include <iostream>
#include <cstring>
using namespace std;

class Book{
	char *title;
	int price;
public:
	Book(const char* title, int price){ this->title = (char *)title; this->price = price; };
	~Book(){};
	Book(Book& book){
		this->price = book.price;
		int len = strlen(book.title);
		this->title = new char[len + 1];
		strcpy_s(this->title, len + 1, book.title);

	}
	void set(char* title, int price){ this->title = title; this->price = price; }
	void show() { cout << title << ' ' << price << "원" << endl; }
};

int main(){
	
	Book cpp("명품C++", 10000);
	Book java(cpp);
	java.set("명품자바", 32000);
	cpp.show();
	java.show();
}
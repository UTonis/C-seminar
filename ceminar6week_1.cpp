#include <iostream>
#include <string>
using namespace std;
class Account{
	string name;
	int id;
	int money;
public:
	Account(){ money = 0; }
	~Account(){};
	Account(string name, int id, int money){
		this->name = name;
		this->id = id;
		this->money = money;
	}
	void deposit(int money){ this->money += money; }
	int withdraw(int money){ this->money -= money; return this->money; }
	string getOwer(){ return this->name; }
	int inquiry(){ return this->money; }
};

int main(){
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwer() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwer() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}
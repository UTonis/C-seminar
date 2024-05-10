#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



class Bank{
private:
	static int totalMoney;
	string name;
	int money;
public:
	Bank(){
		name = "";
		money = 0;
	}
	void deposit(int m){ //입금
		totalMoney += m;
		money += m;
	}
	void withdraw(int m){ //출금
		totalMoney -= m;
		money -= m;
	}
	void setMoney(int m){
		money = m;
		totalMoney += m;
	}
	string getName(){
		return name;
	}
	int getMoney(){
		return money;
	}
	static void gettotalMoney(){
		cout << "은행의 총 보유 금액: " << totalMoney << "원" << endl;
	}
	void setName(string t){
		name = t;
	}
};
int Bank::totalMoney = 0;

void printByMoney(Bank b[], int n){
	for (int i = 0; i < n; i++){
		for (int j = 1; j < n; j++){
			int temp = b[j].getMoney();
			b[j].setMoney(b[j - 1].getMoney());
			b[j - 1].setMoney(temp);
		}
	}
	for (int i = 0; i < n; i++){
		cout << b[i].getName() << "  " << b[i].getMoney() << endl;
	}
}
void printByName(Bank b[], int n){
	string *str = new string[n];
	for (int i = 0; i < n; i++){
		str[i] = b[i].getName();
	}
	sort(str, str + n);

	for (int i = 0; i < n; i++){
		cout << b[i].getName() << "  " << b[i].getMoney() << endl;
	}
}
void printInfo(Bank b[], int n){
	string name = "";
	int money = 0;
	int select;
	cout << "은행관리 프로그램입니다." << endl;
	while (true){
		cout << "원하시는 기능을 선택해주세요." << endl;
		cout << "1.입급  2.출금  3.은행 전체 잔고 4.정보 출력(금액순) 5.정보 출력(이름순)" << endl;
		cout << " 입력 : "; cin >> select;
		switch (select){
		case 1:
			cout << "입금하실 계과주 이름과 금액을 입력해주세요 >>"; cin >> name >> money;
			for (int i = 0; i < n; i++){
				if (name == b[i].getName()){
					b[i].deposit(money);
				}
				else{
					
				}
			}
			break;
		case 2:
			cout << "출금하실 계과주 이름과 금액을 입력해주세요 >>"; cin >> name >> money;
			for (int i = 0; i < n; i++){
				if (name == b[i].getName()){
					if (b[i].getMoney() >= money){
						b[i].withdraw(money);
					}
					else{
						cout << "잔액이 부족합니다.";
					}
				}
				else{
					cout << "입력하신 계좌주가 없습니다!";
				}
			}
			break;
		case 3:
			b->gettotalMoney();
			break;
		case 4:
			printByMoney(b, n);
			break;
		case 5:
			printByName(b, n);
			break;
		default:
			cout << "1~5중의 기능을 선택해주세요.";
		}

	}

}



int main(){
	int n;
	cout << "은행의 멤버수를 입력해주세요: ";
	cin >> n;
	cout << "계좌주의 이름과 초기금액을 입력해주세요" << endl;
	Bank *b = new Bank[n];
	
	for (int i = 0; i < n; i++){
		string t;
		int m;
		cin >> t >> m;
		b[i].setMoney(m);
		b[i].setName(t);
	}
	printInfo(b, n);
}
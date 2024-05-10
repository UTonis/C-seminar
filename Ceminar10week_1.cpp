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
	void deposit(int m){ //�Ա�
		totalMoney += m;
		money += m;
	}
	void withdraw(int m){ //���
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
		cout << "������ �� ���� �ݾ�: " << totalMoney << "��" << endl;
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
	cout << "������� ���α׷��Դϴ�." << endl;
	while (true){
		cout << "���Ͻô� ����� �������ּ���." << endl;
		cout << "1.�Ա�  2.���  3.���� ��ü �ܰ� 4.���� ���(�ݾ׼�) 5.���� ���(�̸���)" << endl;
		cout << " �Է� : "; cin >> select;
		switch (select){
		case 1:
			cout << "�Ա��Ͻ� ����� �̸��� �ݾ��� �Է����ּ��� >>"; cin >> name >> money;
			for (int i = 0; i < n; i++){
				if (name == b[i].getName()){
					b[i].deposit(money);
				}
				else{
					
				}
			}
			break;
		case 2:
			cout << "����Ͻ� ����� �̸��� �ݾ��� �Է����ּ��� >>"; cin >> name >> money;
			for (int i = 0; i < n; i++){
				if (name == b[i].getName()){
					if (b[i].getMoney() >= money){
						b[i].withdraw(money);
					}
					else{
						cout << "�ܾ��� �����մϴ�.";
					}
				}
				else{
					cout << "�Է��Ͻ� �����ְ� �����ϴ�!";
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
			cout << "1~5���� ����� �������ּ���.";
		}

	}

}



int main(){
	int n;
	cout << "������ ������� �Է����ּ���: ";
	cin >> n;
	cout << "�������� �̸��� �ʱ�ݾ��� �Է����ּ���" << endl;
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
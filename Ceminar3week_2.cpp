#include <iostream>
#include <string>
using namespace std;

class Champion{
public: Champion(int hp, int ad, string name){

}
		string name;
		int hp;
		int ad;
		Champion(string n, int h, int a);
		void show();
		void game(Champion cmp1, Champion cmp2);
};
Champion::Champion(string n, int h, int a){
	name = n;
	hp = h;
	ad = a;
}
void Champion::show(){
	cout << "============================" << endl;
	cout << "è�Ǿ� �̸�: " << name << endl;
	cout << "è�Ǿ� ü��: " << hp << endl;
	cout << "è�Ǿ� ���ݷ�: " << ad << endl;
	cout << "============================" << endl << endl;
}

void game(Champion c1, Champion c2){
	cout << "������ �����մϴ�." << endl;
	cout << "------------------" << endl;
	do{
		if (c1.hp > 0 && c2.hp <= 0){ //è��1�� �̰��� ���
			cout << "���ڴ� " << c1.name << "�Դϴ�.";
			break;
		}
		else if (c2.hp > 0 && c1.hp <= 0){ //è��2�� �̰��� ���
			cout << "���ڴ� " << c2.name << "�Դϴ�.";
			break;
		}
		else if (c1.hp <= 0 && c2.hp <= 0){
			cout << "�����ϴ�.";
			break;
		}
		else{
			c1.hp = c1.hp - c2.ad;
			c2.hp = c2.hp - c1.ad;
			cout << c1.name << "�� ����/" << c2.name << "���� " << c1.ad << " ������" << endl;
			cout << c2.name << "�� ����/" << c1.name << "���� " << c2.ad << " ������" << endl;

			cout << "-------�������-------" << endl;
			cout << c1.name << "�� ���� ü�� " << c1.hp << endl;
			cout << c2.name << "�� ���� ü�� " << c2.hp << endl;
			cout << "----------------------" << endl;
		}

	} while (true);
}
int main(){
	string m = "";
	int n, t;
	cout << "��ȯ���� ��� ���� ���� ȯ���մϴ�." << endl;
	cout << "ù ��° è�Ǿ��� �̸� ü�� ���ݷ� ������ ���� ���ּ���." << endl << "ex) ���� 100 10" << endl << "�Է�: ";
	cin >> m >> n >> t;
	Champion cmp1(m, n, t);
	cmp1.show();

	cout << "�� ��° è�Ǿ��� �̸� ü�� ���ݷ� ������ ���� ���ּ���." << endl << "ex) ���� 100 10" << endl << "�Է�: ";
	cin >> m >> n >> t;
	Champion cmp2(m, n, t);
	cmp2.show();

	cout << "������ è�Ǿ��� ���� �Դϴ�." << endl << endl;
	cmp1.show();
	cmp2.show();

	game(cmp1, cmp2);
}
#include <iostream>
#include <string>
using namespace std;

class Member{
private:
	int id;
	string name;
	int grade;
public:
	void getId(int id)
	{
		this->id = id;
	}
	void getgrade(int i)
	{
		grade = i;
	}
	void getname(string m)
	{
		name = m;
	}
	void show(){
		cout << "�г�:" << grade << "	�й�:" << id << "	�̸�:" << name << endl;
	}
};

int main(){
	int n, m, size;
	string t;
	
	cout << "��� �� �� �Է����ּ��� >>";
	cin >> size;
	Member *p = new Member[size];


	for (int i = 0; i < size; i++){
		cout << "�й� / �г� / �̸� ������ �Է� >> ";
		cin >> n >> m >> t;

		p[i].getId(n);
		p[i].getgrade(m);
		p[i].getname(t);
	}

	for (int i = 0; i < size; i++){
		p[i].show();
	}	
}
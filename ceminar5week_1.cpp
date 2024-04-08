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
		cout << "학년:" << grade << "	학번:" << id << "	이름:" << name << endl;
	}
};

int main(){
	int n, m, size;
	string t;
	
	cout << "멤버 수 를 입력해주세요 >>";
	cin >> size;
	Member *p = new Member[size];


	for (int i = 0; i < size; i++){
		cout << "학번 / 학년 / 이름 순으로 입력 >> ";
		cin >> n >> m >> t;

		p[i].getId(n);
		p[i].getgrade(m);
		p[i].getname(t);
	}

	for (int i = 0; i < size; i++){
		p[i].show();
	}	
}
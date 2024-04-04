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
	cout << "챔피언 이름: " << name << endl;
	cout << "챔피언 체력: " << hp << endl;
	cout << "챔피언 공격력: " << ad << endl;
	cout << "============================" << endl << endl;
}

void game(Champion c1, Champion c2){
	cout << "게임을 시작합니다." << endl;
	cout << "------------------" << endl;
	do{
		if (c1.hp > 0 && c2.hp <= 0){ //챔프1이 이겼을 경우
			cout << "승자는 " << c1.name << "입니다.";
			break;
		}
		else if (c2.hp > 0 && c1.hp <= 0){ //챔프2가 이겼을 경우
			cout << "승자는 " << c2.name << "입니다.";
			break;
		}
		else if (c1.hp <= 0 && c2.hp <= 0){
			cout << "비겼습니다.";
			break;
		}
		else{
			c1.hp = c1.hp - c2.ad;
			c2.hp = c2.hp - c1.ad;
			cout << c1.name << "의 공격/" << c2.name << "에게 " << c1.ad << " 데미지" << endl;
			cout << c2.name << "의 공격/" << c1.name << "에게 " << c2.ad << " 데미지" << endl;

			cout << "-------전투기록-------" << endl;
			cout << c1.name << "의 남은 체력 " << c1.hp << endl;
			cout << c2.name << "의 남은 체력 " << c2.hp << endl;
			cout << "----------------------" << endl;
		}

	} while (true);
}
int main(){
	string m = "";
	int n, t;
	cout << "소환사의 협곡에 오신 것을 환영합니다." << endl;
	cout << "첫 번째 챔피언을 이름 체력 공격력 순으로 생성 해주세요." << endl << "ex) 가렌 100 10" << endl << "입력: ";
	cin >> m >> n >> t;
	Champion cmp1(m, n, t);
	cmp1.show();

	cout << "두 번째 챔피언을 이름 체력 공격력 순으로 생성 해주세요." << endl << "ex) 가렌 100 10" << endl << "입력: ";
	cin >> m >> n >> t;
	Champion cmp2(m, n, t);
	cmp2.show();

	cout << "생성된 챔피언의 정보 입니다." << endl << endl;
	cmp1.show();
	cmp2.show();

	game(cmp1, cmp2);
}
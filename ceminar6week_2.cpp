#include <iostream>
using namespace std;
class Sample{
	int *p;
	int size;
public:
	Sample(){}
	Sample(int n){
		size = n; p = new int[n];
	}
	void read(){
		for (int i = 0; i < 10; i++){
			cin >> p[i];
		}
	};
	void write(){
		for (int i = 0; i < 10; i++){
			cout << p[i] << " ";
		}
		cout << endl;
	};
	int big(){
		int max = p[0];
		for (int i = 0; i < 10; i++){
			if (max < p[i])
				max = p[i];
		}
		return max;
	};
	~Sample(){ delete[] p; }
};

int main(){
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}
#include <iostream>
using namespace std;

int n1, n2;
int sum(int n1, int n2){
	return n1 + n2;
}
int min(int n1, int n2){
	return n1 - n2;
}
int X(int n1, int n2){
	return n1 * n2;
}
int di(int n1, int n2){
	return n1 / n2;
}
int main() {
	/* 1��
	cout << "Hello World\n";
	*/
	
	/* 2��
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++){
		for (int j = 0; j < i; j++){
			cout << "*";
		}
		cout << "\n";
	}
	*/
	cout << "�� ���ڸ� �Է����ּ���";
	cin >> n1 >> n2;

	cout << "�� : " << sum(n1,n2) << endl;
	cout << "���� : " << min(n1, n2) << endl;
	cout << "���ϱ� : " << X(n1, n2) << endl;
	cout << "������ : " << di(n1, n2) << endl;

	return 0;
}



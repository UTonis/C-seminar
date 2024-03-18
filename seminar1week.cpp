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
	/* 1번
	cout << "Hello World\n";
	*/
	
	/* 2번
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++){
		for (int j = 0; j < i; j++){
			cout << "*";
		}
		cout << "\n";
	}
	*/
	cout << "두 숫자를 입력해주세요";
	cin >> n1 >> n2;

	cout << "합 : " << sum(n1,n2) << endl;
	cout << "빼기 : " << min(n1, n2) << endl;
	cout << "곱하기 : " << X(n1, n2) << endl;
	cout << "나누기 : " << di(n1, n2) << endl;

	return 0;
}



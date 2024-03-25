#include <iostream>
using namespace std;

//int Compare(int a, int b){
//	if (a > b)
//		return a;
//	else if (a < b)
//		return b;
//	else
//		return 0;
//}

void Pira(int n){
	for (int i = 0; i < n; i++){
		for (int j = n - i; j > 0; j--){
			cout << " ";
		}
		for (int p = 0; p < i*2+1; p++){
			cout << "*";
		}
		cout << "\n";
	}
}

int main(){
	//int n, m;

	//cin >> n >> m;

	//cout << Compare(n, m);

	int c;
	cout << "Ãş ¼ö >>";
	cin >> c;
	Pira(c);

	return 0;

}
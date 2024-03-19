#include <iostream>
using namespace std;

int main(){
	int num[10] = { 3, 42, 6, 5, 7, 8, 2, 1, 4, 23 };

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < i; j++){
			int a;
			if (num[i] > num[j]){
				a = num[j];
				num[j] = num[i];
				num[i] = a;
			}
		}
	}
	for (int i = 0; i < 10; i++){
		cout << num[i] << " ";
	}
	return 0;

}
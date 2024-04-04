#include <iostream>
#include <string>
using namespace std;

class Math{
public: Math() { this->size = 0; }
		int p = 0;
		int size;
		int arr[100];
		void putNum(int n){
			arr[p] = n;
			p++;
		}

		void printArr(){
			for (int i = 0; i < p; i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}
		void sortedPrintArr(){
			int temp;
			for (int i = 0; i < p; i++){
				for (int j = 0; j < i; j++){
					if (arr[j] > arr[j + 1]){
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
				}
			}
			printArr();
		}
};

int main(){
	Math m;
	while (true){
		string t;
		cout << "1.배열에 숫자 넣기  2.배열 출력  3. 오름차순으로 정렬된 배열 출력  4.종료 " << endl;
		cout << "입력: ";
		cin >> t;

		if (t == "1"){
			int s;
			cout << "배열에 추가할 숫자를 입력해주세요" << endl;
			cin >> s;
			m.putNum(s);
		}
		else if (t == "2"){
			m.printArr();
		}
		else if (t == "3"){
			m.sortedPrintArr();
		}
		else if (t == "4"){
			break;
		}
	}
}
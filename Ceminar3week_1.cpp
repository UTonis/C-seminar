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
		cout << "1.�迭�� ���� �ֱ�  2.�迭 ���  3. ������������ ���ĵ� �迭 ���  4.���� " << endl;
		cout << "�Է�: ";
		cin >> t;

		if (t == "1"){
			int s;
			cout << "�迭�� �߰��� ���ڸ� �Է����ּ���" << endl;
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


#include <iostream>;
using namespace  std;
int main() {

	//a)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	cout << "---------------------";
	cout << endl;
	cout << endl;

	//b)
	for (int i = 9; i > -1; i--) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;

	}
	cout << endl;
	cout << "---------------------";
	cout << endl;
	cout << endl;

	//c)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j < i) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << "---------------------";
	cout << endl;
	cout << endl;

	//d)
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 9 - i; k++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

}




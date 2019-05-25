#include <iostream>
#include <string>
using namespace std;
int counter = 0;

void sillyFunction(string string, int n = 0);

int main() {
	string string;
	cout << "Please, enter string: ";
	cin >> string;

	sillyFunction(string, 3);
	cout << "Second attempt: \n";
	sillyFunction(string, 3);

	cout << "Attempt with one argument: \n";
	sillyFunction(string);


	system("pause");
}

void sillyFunction(string myString, int a) {
	counter++;
	if (a > 0) {
		for (int i = counter; i > 0; i--) {
			cout << myString << endl;
		}
	}
	else cout << myString << endl;
}
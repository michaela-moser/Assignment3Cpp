#include <iostream>
using namespace std;
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double calculate(double x, double y, double(*pf) (double, double));
int main() {
	double x=0;
	double y=0;
	double(*pointerArray[3]) (double, double) = { add, subtract, multiply };
	cout << "Please enter a numerical value for both x and y, enter quit to quit: ";
	while ((cin >> x >> y)) {
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "First function will add x and y, second function will subtract x from y, third function will multiply x by y\n";
		for (int i = 0; i < 3; i++) {
			cout << "Function Number " << i + 1 << " = " << calculate(x, y, pointerArray[i]) << endl;
		}
		cout << "Please enter other numerical values for x and y: ";
	}
	cout << "Peace it worked!\n";
	system("pause");
	return 0;
}


double add(double x, double y) {
	return x + y;
}

double subtract(double x, double y) {
	return x - y;
}

double multiply(double x, double y) {
	return x * y;
}

double calculate(double x, double y, double(*fp) (double, double)) {
	return fp(x, y);
}
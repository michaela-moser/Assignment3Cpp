
#include <iostream>
#include <cstring>
using namespace std;

template <typename T> T maxn(T a[], const int counter) {
	T myMax = a[0];
	for (int i = 0; i < counter; i++) {
		if (a[i] > myMax)
			myMax = a[i];
	}
	return myMax;
}
template <> char * maxn <char *>(char * a[], const int counter) {
	char * myMax = a[0];
	for (int i = 1; i < counter; i++) {
		if (strlen(a[i]) > strlen(myMax))
			myMax = a[i];
	}
	return myMax;
}

int main() {
	char const* str[5] = { "1", "2100", "5", "7", "300" };
	int my_int[6] = { 1, 2, 3, 4, 5, 6 };
	double my_double[4] = { 1.1, 2.2, 3.3, 4.4 };
	cout << maxn(my_int, 6) << endl;
	cout << maxn(my_double, 4) << endl;
	cout << maxn(str, 5) << endl;

	system("pause");
	return 0;
}

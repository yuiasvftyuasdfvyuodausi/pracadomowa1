#include <iostream>

using namespace std;

long silnia(int n) {
	long s = 1;
	for (int i = n; i > 1; i--) {
		s *= i;
	}
	return s;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
	cout << "1. Silnia" << endl;
        cin >> wyjscie;
	if (wyjscie == 1) {
		cout << a << "!=" << silnia(a) << endl;
	}
    } while(wyjscie != 0);
    return 0;
}

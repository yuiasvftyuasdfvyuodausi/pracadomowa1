#include <iostream>

using namespace std;

bool czyPierwsza(int a) {
	if (a < 2) {
		return false;
	}

	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			return false;
		}
	}

	return true;
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
	cout << "1. Liczba pierwsza" << endl;
        cin >> wyjscie;
	if (wyjsie == 1) {
		cout << a;
		if (czyPierwsza(a)) {
			cout << " jest pierwsza" << endl; 
		} else {
			cout << " nie jest pierwsza" << endl;
		}
	}
    } while(wyjscie != 0);
    return 0;
}

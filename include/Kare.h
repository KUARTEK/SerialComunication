#ifndef KARE_H
#define KARE_H
#include "Sekiller.h"
#include <iostream>
using namespace std;

class Kare : public Sekiller {
public:
	void KareAlan() {
		kareKenar1:
		cout << endl;
		cout << "Karenin kenar uzunlugunu giriniz: ";
		cin >> kenar1;
		if(kenar1 <= 0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto kareKenar1;
		}
		else{
		Alan = kenar1 * kenar1;
		cout << endl << "GIRILEN KARENIN BILGILERI" << endl;
		cout << "Karenin kenar uzunlugu: ";
		cout << kenar1 << endl;
		cout << "Karenin alani: ";
		cout << Alan;
		}
	}

	void KareCevre() {
		kareKenar1:
		cout << endl;
		cout << "Karenin kenar uzunlugunu giriniz: ";
		cin >> kenar1;
		if(kenar1 <= 0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto kareKenar1;
		}
		else{
		Cevre = kenar1 * 4;
		cout << endl << "GIRILEN KARENIN BILGILERI" << endl;
		cout << "Karenin kenar uzunlugu: ";
		cout << kenar1 << endl;
		cout << "Karenin cevresi: ";
		cout << Cevre;
		}
	}
};




#endif

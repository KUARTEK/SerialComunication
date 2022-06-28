#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H
#include "Sekiller.h"
#include <iostream>
using namespace std;
class Dikdortgen : public Sekiller {

public:

	void DikdortgenAlan() {
		dikdortgenKenar1:
		cout << endl;
		cout << "Birinci kenar uzunlugunu giriniz: ";
		cin >> kenar1;
		if (kenar1 <= 0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto dikdortgenKenar1;
		}
		else{
			dikdortgenKenar2:
			cout << endl << "Ikinci kenar uzunlugunu giriniz: ";
		cin >> kenar2;
		if(kenar2 <= 0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto dikdortgenKenar2;
		}
		else{
		Alan = kenar1 * kenar2;
		cout << endl << "GIRILEN DIKDORTGENIN BILGILERI" << endl;
		cout << "Dikdortgenin birinci kenar uzunlugu: ";
		cout << kenar1 << endl;
		cout << "Dikdortgenin ikinci kenar uzunlugu: ";
		cout << kenar2 << endl;
		cout << "Dikdortgenin alani: ";
		cout << Alan;
		}
		}
		
	}

	void DikdortgenCevre() {
		dikdortgenKenar1:
		cout << endl;
		cout << "Birinci kenar uzunlugunu giriniz: ";
		cin >> kenar1;
		if(kenar1 <= 0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto dikdortgenKenar1;
		}
		else{
		dikdortgenKenar2:
		cout << endl << "Ikinci kenar uzunlugunu giriniz: ";
		cin >> kenar2;
		if(kenar2 <= 0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto dikdortgenKenar2;
		}
		else {
		Cevre = kenar1 * 2 + kenar2 * 2;
		cout << endl << "GIRILEN DIKDORTGENIN BILGILERI" << endl;
		cout << "Dikdortgenin birinci kenar uzunlugu: ";
		cout << kenar1 << endl;
		cout << "Dikdortgenin ikinci kenar uzunlugu: ";
		cout << kenar2 << endl;
		cout << "Dikdortgenin cevresi: ";
		cout << Cevre;
		}
		}
		}
};

#endif
